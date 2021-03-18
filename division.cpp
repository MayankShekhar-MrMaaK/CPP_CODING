#include<iostream>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n,d;
	cin>>n>>d;
	while(n>0)
		n-=d;
    cout<< n+d;
}