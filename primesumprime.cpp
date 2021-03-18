#include<iostream>
#define REP(i,n) for(int i=0;i<n;i++)
#define ll long long
#define lli long long int
using namespace std;
int n=1000001;
bool arr[1000001];//false
void seive(){
	arr[0]=arr[1]=true;
	for(int i=2;i*i<n;i++)
		if(!arr[i])
			for(int j=i*i;j<n;j+=i)
				arr[j]=true;//is multiple		
}
bool check(int a){
	int sum=0,r;
	while(a>0){
		r=a%10;
		a/=10;
		sum+=r;
	}
	if(!arr[sum])	return true;
	else 			return false;
}

int main(){
	seive();
	int L,R;
	cin>>L>>R;
	for(int i=L;i<=R;i++)
		if(!arr[i])
			if(check(i))
				cout<<i<<" ";
	}