#include<iostream>
#include<unordered_map>
#include<vector>
#define REP(i,n) for(int i=0;i<n;i++)
#define ll long long
#define lli long long int
#define endl "\n"
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

void count0subarraysum(int arr[],int n){
	int cnt=0,i=-1,sum=0;
	unordered_map<int,int> m;
	m[0]=1;//taking no subarray	
	while(i<n-1){
		i++;
		sum+=arr[i];
		if(m.find(sum)!=m.end()){//check if a key is present or not...here is present then
			cnt+=m[sum];
			m[sum]+=1;
		}
		else m[sum]=1;
	}
	cout<<"0sum subarray occurs "<<cnt<<" times.\n";
	for(auto itr=m.begin();itr!=m.end();itr++){
		cout<<itr->first<<" "<<itr->second<<" ";
		cout<<"\n";
	}
}

void print0subarray(int arr[],int n){
	int sum=0,i=-1	;
	unordered_map<int,vector<int>> m;
	m[0]={-1};
	while(i<n-1){
		i++;
		sum+=arr[i];
		if(m.find(sum)!=m.end()){
			m[sum].push_back(i);
		}
		else{
			m[sum]={i};
		}
	}
	for(auto it=m.begin();it!=m.end();it++){
		cout<<it->first<<" ->";
		for(auto it2 = it->second.begin(); it2 != it->second.end(); ++it2)
    		cout << *it2 << " ";
    	cout<<"\n";
	}
	
}

void longestsubarraywithsum0(int arr[],int n){
	int sum=0,i=-1,len=0,maxlen=-1;
	unordered_map<int,int> m;
	m[0]=-1;
	while(i<n-1){
		len=0,i++;
		sum+=arr[i];
		if(m.find(sum)!=m.end()){//found the element
			len=i-m[sum];
		}
		else{
			m[sum]=i;
		}
		if(len>=maxlen){
			maxlen=len;
		}
	}
	cout<<"longest subarray with sum=0 is of length= "<<maxlen<<"\n";
}

int main(){
	IO;
	int arr[12]={2,8,-3,-5,2,-4,6,1,2,1,-3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	count0subarraysum(arr,n);
	print0subarray(arr, n);
	longestsubarraywithsum0(arr,n);
}                       