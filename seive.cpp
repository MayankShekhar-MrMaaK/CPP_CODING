#include<iostream>
#include<vector>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int maxN=90000000;
	bool arr[90000001];
	arr[0]=arr[1]=true;
	for(int i=2;i*i<=maxN;i++)
		if(arr[i]==false) //true for multiple is covered
			for(int j=i*i;j<=maxN;j+=i)
				arr[j]=true; //is multiple
	
	vector<int> vi;
	for (int i = 2; i <=maxN; i++)
		if(arr[i]==false)
			vi.push_back(i);
	int t,in;
	cin>>t;
	while(t--){
		cin>>in;
		cout<<vi[in-1]<<endl;
	}
}

/*
Input:
7
1
10
100
1000
10000
100000
1000000
*/