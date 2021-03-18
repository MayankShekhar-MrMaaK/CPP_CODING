#include<iostream>
#include<queue>
#define REP(i,n) for(int i=0;i<n;i++)
#define ll long long
#define lli long long int
#define endl "\n"
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FIO freopen("input.txt","r",stdin); //freopen("output.txt","w",stdout);
using namespace std;

int main(){
	IO; FIO;
	int n,k;
	cin>>n;
	int arr[n];
	REP(i,n)
		cin>>arr[i];
	cin>>k;
	priority_queue<int,vector<int>,greater<int>> q;
	
	for(int i=0;i<=k;i++)	q.push(arr[i]);//=k since element can jump up to k steps.
	
	for(int i=k-1;i<n;i++){
		if(q.size()<k)	q.push(arr[i]);
		cout<<q.top()<<" ";
		q.pop();
	}
	while(!q.empty()) {
		cout<<q.top()<<" ";
		q.pop();
	}
}

/*
input:-
8
10 9 8 7 4 70 60 50
4
output:-
4 7 8 9 10 50 60 70
*/
