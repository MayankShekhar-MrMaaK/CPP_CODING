#include<iostream>
#include<unordered_map>
#define REP(i,n) for(int i=0;i<n;i++)
#define ll long long
#define lli long long int
#define endl "\n"
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
using namespace std;
int main(){
	IO;
	unordered_map<int,int> m; //using map for storage and for future use.
	int n=52,count;
	int n1=n;
	for(int i=2;i*i<=n;i++){
		count=0;
		if(n%i==0){
			m.insert(pair<int,int>(i,0));
			while(n%i==0){
				count++;
				n/=i;
			}
			m[i]=count;
		}	
	}
	for (auto itr = m.begin(); itr != m.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
}
