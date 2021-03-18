#include<iostream>
#include<queue>
#define REP(i,n) for(int i=0;i<n;i++)
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FIO freopen("input.txt","r",stdin); //freopen("output.txt","w",stdout);
using namespace std;

int main(){
	IO,//FIO;
	int n,k;
	cin>>n;
	int arr[n];
	REP(i,n)
		cin>>arr[i];
	cin>>k;
	priority_queue<int,vector<int>,greater<int>> q; //create a low number as the highest priority.
	REP(i,n){
		if(i<k)
			q.push(arr[i]);
		else
			if(arr[i]>q.top()){
				q.pop();
				q.push(arr[i]);
			}
	}
	cout<<q.top();
}