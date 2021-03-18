#include<iostream>
using namespace std;
const int max_n=1e6;
bool arr[max_n+1];//using false for prime numbers

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t,n;
	arr[0]=arr[1]=true;
	for(int i=2;i*i<=max_n;i++) if(!arr[i]) for(int j=i*i;j<=max_n;j+=i) arr[j]=true;
 		//generate all seive numbers prime numbers
	arr[2]=true;	//only prime number which is even so making is non prime
	cin>>t;
	while(t--){
		cin>>n;
		if(n<5) {cout<<"No\n"; continue;}
		else{
			 for(int i=3;i<=n;i++) if(!arr[i] and !arr[n-i]){ cout<<n<<" = "<<i<<" + "<<n-i<<"\n"; break; }
		}
	}
}



/*
Explanatory
#include<iostream>
#include<vector>
#define REP(i,n) for(int i=0;i<=n;i++)
#define lli long long int
using namespace std;
lli max_n=10000001;
bool arr[10000001];//using false for prime numbers
void seive(){
	arr[0]=arr[1]=true;	
	for(lli i=2;i*i<max_n;i++){
		if(!arr[i]){
			for(lli j=i*i;j<max_n;j+=i)
				arr[j]=true;
		}
	} //generate all seive numbers prime numbers
	arr[2]=true;//only prime number which is even so making is non prime
}
void conjecture(int n){
	bool flag=false;
	int k=n/2;
	int a,b,max=-1,a1,b1,diff;
	REP(i,k){
		a=k+i, b=k-i;
		if(arr[a]==false && arr[b]==false){//is prime
			diff=a-b,flag=true;
			if(diff>=max)
				a1=a,b1=b;		
		}
	}
	if(flag) cout<<b1+a1<<" = "<<b1<<" + "<<a1<<endl;
	else cout<<"No"<<endl;
}
 
int main(){
	int t,n;
	seive();
	cin>>t;
	while(t--){
		cin>>n;
		if(n<4) cout<<"No\n";
		conjecture(n);
	}
}*/