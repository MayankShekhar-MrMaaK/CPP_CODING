#include<iostream>
#define P 1000000007
#define loop(i,m,n) for(int i=m;i<n;i++)
#define lli long long int
using namespace std;

lli power(lli base, lli power){
    lli res=1;
    while(power){
        if(power%2){
            res=((res%P)*(base%P))%P;
            power--;
        }
        else{
            base=((base%P)*(base%P));
            power/=2;
        }
    }
    return res;
}
lli C(int a, int b){
    lli f[1000001];
    f[0]=f[1]=1;
    loop(i,2,1000000)
        f[i]=(f[i-1]*i)%P;

    //                   A! 
    //  C(A,B)=  -----------------
    //              ((A-B)! * B!)
    /*
        A/B = A* (modulo inverse of B)
            where modulo inverse of B = power(B,P-2)
                where P = prime number and P=1000000007
    */
    lli res=(f[a]*(power(f[a-b],P-2)))%P;
    res=(res*(power(f[b],P-2)))%P;
    return res;
}
int main(){
    int q;
    int a,b;
    cin>>q;
    while(q--){
        cin>>a>>b;
        cout<<C(a,b)<<"\n";
    }
}
/*
INPUT:-
2
5 2
9 4
OUTPUT:-
10
126
*/