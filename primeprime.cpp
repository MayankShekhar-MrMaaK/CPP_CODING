#include<iostream>
#include<vector>
#define REP(i,n) for(int i=0;i<=n;i++)
#define lli long long int
using namespace std;
int n=1000001;
int arr[1000001];
int v[1000001];
void seive(){
	REP(i,n) arr[i]=1; //make all value true
	arr[0]=arr[1]=0;	
	for(lli i=2;i*i<n;i++){
		if(arr[i]!=0){
			for(lli j=i*i;j<n;j+=i)
				arr[j]=0;
		}
	} //generate all seive numbers prime numbers

	int count=0;
	for(int i=2;i<n;i++){ 
		if(arr[i]==1)	count++;
		
		if(arr[count]==1) v[i]=1;
		else v[i]=0;	//creating prime prime yes(1) or not(0)
	}
	
	v[0]=v[1]=0;
	for(int i=2;i<n;i++)
		v[i]=v[i]+v[i-1];
	
	REP(i,14) cout<<v[i]<<" ";
	cout<<endl;
}
int main(){
	int t,L,R;
	seive();
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	cin>>t;
	while(t--){
		cin>>L>>R;
		cout<<v[R]-v[L]+1<<endl;
	}
}