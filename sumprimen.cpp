#include<iostream>
#include<vector>
#define lli long long int
using namespace std;
lli n=90000001;
bool arr[90000001];// all false;
vector<lli> v;

void seive(){
  arr[0]=arr[1]=true;//not a prime number
  for(lli i=2;i*i<n;i++)
    if(!arr[i])
      	for(lli j=i*i;j<n;j+=i)
        	arr[j]=true;
  
  for(int i=2;i<n;i++)
  	if(arr[i]==false) v.push_back(i);
  
  for(lli i=1;i<v.size();i++)
  	v[i]=v[i]+v[i-1];
}

int main(){
  int t;
  lli ip;
  seive();
  cin>>t;
  while(t--){
    cin>>ip;
    cout<<v.at(ip-1)<<endl;
  }
}