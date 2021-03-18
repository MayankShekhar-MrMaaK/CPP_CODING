#include<iostream>
#define REP(i,n) for(int i=0;i<n;i++)
#define ll long long
#define lli long long int
#define endl "\n"
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
using namespace std;

int pow(int base, int power){
	int res=1;
	while(power){
		if(power%2==0)	base*=base, power/=2;
		else			res*=base,  power--;
	}
	return res;
}

int main(){
	IO;
	int base,power;
	cin>>base>>power;
	//determine x^n //using binary exponentiation
	int res=pow(base,power);
	
	
	int pow2(){
		
	}
	cout<<res<<"\n";	
}
