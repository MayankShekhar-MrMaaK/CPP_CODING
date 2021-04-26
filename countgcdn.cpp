#include<iostream>
using namespace std;
int phi[1000001];
void euler(){ //create an euler totient phi-array
    int n=1000000;
    for(int i=1;i<=n;i++) phi[i]=i;
    
    for(int i=2;i*i<=n;i++)
        if(phi[i]==i){
            for(int j=i;j<=n;j+=i){
                phi[j]/=i;
                phi[j]*=(i-1);
            }
        }
}

int main(){
    euler();
    int q;
    cin>>q;
    while(q--){
        int m,k;
        cin>>m>>k;
        cout<<phi[m/k]<<"\n";
    } 
}

/*
Count of numbers upto M with GCD equals to K when paired with M
https://www.geeksforgeeks.org/count-of-numbers-upto-m-with-gcd-equals-to-k-when-paired-with-m/?ref=rp
Input: M = 9, K = 1
Output: 6
Explanation:
The possible numbers such that when paired with 9, there GCD is 1, are 1, 2, 4, 5, 7, 8.

Input: M = 10, K = 5
Output: 1
*/