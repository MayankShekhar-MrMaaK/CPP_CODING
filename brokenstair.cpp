#include<iostream>
#define loop(i,m,n) for(int i=m;i<n;i++)
using namespace std;
int stair(int arr[],int n,int k){
    int dp[k+1];
    loop(i,0,k+1) dp[i]=-1;
    loop(i,0,n) dp[arr[i]]=0;
    dp[k]=1;

    for(int i=k-1;i>=0;i--){
        if(dp[i]!=0){
            int v=0;
            for(int j=1;j<=2 and i+j<k+1 ;j++){
                if(dp[i+j]!=0)
                    v+=dp[i+j];
            }
            dp[i]=v;
        }
    }
    return dp[0]%1000000007;
}
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    loop(i,0,n)
        cin>>arr[i];
    cout<<stair(arr,n,k)<<"\n";
}
/*
Find the number of ways to reach Kth step in stair case
https://www.geeksforgeeks.org/find-the-number-of-ways-to-reach-kth-step-in-stair-case/?ref=rp
Given an array arr[] of size N and an integer K. 
Array represents the broken steps in a staircase. 
One can not reach a broken step. 
The task is to find the number of ways to reach the Kth step in the staircase 
    starting from 0 when a step of maximum length 2 can be taken at any position.
The answer can be very large. So, print the answer modulo 10^9 + 7.

Examples:

    Input: arr[] = {3}, K = 6
    Output: 4
    0 -> 1 -> 2 -> 4 -> 5 -> 6
    0 -> 1 -> 2 -> 4 -> 6
    0 -> 2 -> 4 -> 5 -> 6
    0 -> 2 -> 4 -> 6

    Input: arr[] = {3, 4}, K = 6
    Output: 0
*/