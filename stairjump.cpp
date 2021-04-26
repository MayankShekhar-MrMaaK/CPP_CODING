#include<iostream>
using namespace std;
int stair(int arr[],int n){
    int dp[n+1];
    for(int i=0;i<n+1;i++) dp[i]=0;
    dp[n]=1;//6 se 6 jane mei kitne raste hae--1--chalo hi nii
    for(int i=n-1;i>=0;i--){
        for(int j=1;j<=arr[i] and i+j<n+1 ;j++){
            dp[i]+=dp[i+j];
        }
    }
    return dp[0];
}

int main(){
    int n;//size of array
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<stair(arr,n);

}
/*

*/