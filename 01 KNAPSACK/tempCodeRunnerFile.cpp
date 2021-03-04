#include <iostream>
using namespace std;
int main(){
    long n=0,n1=0,n2=1,n3=0;
    cin>>n;
    long count=0;
    while(!(n3>n)){// fibonaci series
        n3=n1+n2;   
        n1=n2;    
        n2=n3;
        count+=1;
    }
    cout<<"dfd"<<count-2;
    return 0;
}