#include<iostream>
#include<unordered_map>
#define REP(i,n) for(int i=0;i<n;i++)
#define ll long long
#define lli long long int
#define endl "\n"
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
using namespace std;

void countksubarraysum(int arr[],int n,int k){
	int sum=0,i=-1,count=0;
	unordered_map<int,int> m;
	m[0]=1;
	while(i<n-1){
		i++;
		sum+=arr[i];
		if(m.find(sum-k)!=m.end())//i.e sum-k is found in hashmap
			count+=m[sum-k];
		if(m.find(sum)!=m.end())	m[sum]+=1;
		else						m[sum]=1;
	}
	cout<<"count of subarray that sums to "<<k<<" are: "<<count;
}

int main(){
	IO;
	int arr[]={10, 2, -2, -20, 10};//{3,9,-2,4,1,-7,2,6,-5,8,-3,-7,6,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=-10;
	countksubarraysum(arr,n,k);
}
