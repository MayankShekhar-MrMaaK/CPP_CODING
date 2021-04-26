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
void divisors(int n){//get all divisors of n
    int res=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            int d1=i;
            int d2=n/i;
            res+=d1*phi[n/d1];
            if(d1!=d2)
                res+=d2*phi[n/d2];
        }
    }
    cout<<res<<"\n";
}
int main(){
    euler();
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        divisors(n);
    }
    
}
/*
Sum of GCD of all numbers upto N with N itself
https://www.geeksforgeeks.org/sum-of-gcd-of-all-numbers-upto-n-with-n-itself/
Input: N = 12 
Output: 40 
Explanation: 
GCD of [1, 12] = 1, [2, 12] = 2, [3, 12] = 3, [4, 12] = 4, [5, 12] = 1, [6, 12] = 6, [7, 12] = 1, [8, 12] = 4, [9, 12] = 3, [10, 12] = 2, [11, 12] = 1, [12, 12] = 12. The sum is (1 + 2 + 3 + 4 + 1 + 6 + 1 + 4 + 3 + 2 + 1 + 12) = 40.
Input: N = 2 
Output: 3 
Explanation: 
GCD of [1, 2] = 1, [2, 2] = 2 and their sum is 3.
*/