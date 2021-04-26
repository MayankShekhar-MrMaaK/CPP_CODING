#include<iostream>
#define loop(i,m,n) for(int i=m;i<n;i++)
using namespace std;
int stair(int n){
    int arr[n+1];
    loop(i,0,n+1) arr[i]=1;//6 se 6 jane mei kitne raste hae--1--chalo hi nii
    
    for(int i=n-1;i>=0;i--){
        if(i+2>n)       arr[i]=arr[i+1];
        else if(i+3>n)  arr[i]=arr[i+1]+arr[i+2];
        else            arr[i]=arr[i+1]+arr[i+2]+arr[i+3];
    }
    /*
    for(int i=n-1;i>=0;i--){
        for(int j=1;j<=3 and i+j<n+1 ;j++){
            dp[i]+=dp[i+j];
        }
    }
    */
    return arr[0];
}

int main(){
    int n;
    int q;
    cin>>q;
    while(q--){
        cin>>n;
        cout<<stair(n)<<"\n";
    }
}