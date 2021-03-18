#include<iostream>
#include<unordered_map>
#define REP(i,n) for(int i=0;i<n;i++)
#define ll long long
#define lli long long int
#define endl "\n"
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FIO freopen("input.txt","r",stdin); //freopen("output.txt","w",stdout);
using namespace std;

void lcs(int arr[],int n){
	unordered_map<int,bool> m;
	
	REP(i,n)
		m[arr[i]]=true;
	
	REP(i,n){
		if(m.find(arr[i]-1)!=m.end())
			m[arr[i]]=false;
		else
			m[arr[i]]=true;
	}
	
	int j;
	int len,maxlen=-1;
	REP(i,n){
		if(m[arr[i]]==true){
			cout<<arr[i]<<" ";
			j=1,len=1;
			while(true){
				if(m.find(arr[i]+j)!=m.end()){
					cout<<arr[i]+j<<" ";
					j++;len++;
				}
				else	break;
			}
			if(len>=maxlen)	maxlen=len;
			cout<<"\n";
		}
	}
	cout<<"maxlen= "<<maxlen<<"\n";
}

int main(){
	IO,FIO;
	int n;
	cin>>n;
	int arr[n];
	REP(i,n)
		cin>>arr[i];
		
	lcs(arr,n);

}

/*input:-
11
10 5 9 1 11 8 6 15 3 12 2
*/
/*output:=
5 6
1 2 3
8 9 10 11 12
15
maxlen= 5
*/