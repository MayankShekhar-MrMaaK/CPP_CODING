#include<iostream>
#include<algorithm>
using namespace std;
int stair(int arr[],int n){
    int dp[n+1];
    dp[n]=0;//6 se 6 kitne moves mei pahuch skte hae--0
    for(int i=n-1;i>=0;i--) {
        int m=INT_MAX;
        for(int j=1;j<=2 and i+j<n+1;j++){
            m=min(m,dp[i+j]);
        }
        dp[i]=m+arr[i];
    }
    return min(dp[0],dp[1]);//start from 0th or 1st position.
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<stair(arr,n);
}
/*
Minimum cost to reach the top of the floor by climbing stairs
https://www.geeksforgeeks.org/minimum-cost-to-reach-the-top-of-the-floor-by-climbing-stairs/
Input: a[] = { 16, 19, 10, 12, 18 }
Output: 31
Start from 19 and then move to 12. 

Input: a[] = {2, 5, 3, 1, 7, 3, 4}
Output: 9 
2->3->1->3
*/