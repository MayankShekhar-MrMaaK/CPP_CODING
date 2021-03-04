#include<iostream>
using namespace std;
int main(){
    int x=9;
    int* i=&x; //Pointer Concept
    x=11;//changing value of x would also change value of i
    
    int z=*i;
    int &c=x;//Reference Concept
    c=2;
    cout<<"value of c="<<c<<endl;
    cout<<*&c<<endl;
    cout<<x<<endl;//11
    cout<<i<<endl;//address
    cout<<&x<<endl;//address
    cout<<&i<<endl;//address
    *i=9;
    cout<<*i<<endl;//11..accessing element stored in address
    cout<<x<<endl;//11
    cout<<c<<endl;//11

    //Both pointer and reference are used to change value
    //passed by reference.
}