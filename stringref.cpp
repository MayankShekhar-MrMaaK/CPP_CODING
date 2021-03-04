#include<iostream>
using namespace std;
void f(string &z, int n){
    z.replace(0,n,"main");
    cout<<z<<" "<<z.length()<<endl;//Lenght got updated auto
}
int main(){
    string s("Abc def");
    int n=s.length();
    cout<<s<<" "<<n<<endl;
    f(s, n);
    cout<<s<<endl;
    
    //Traversing string-->Recommended
    for(size_t i=0;i<n;i++){
        cout<<s[i];
    }

    //String are passed by Value default
    //to pass it as a reference,
    //fun(str)
    //fun(string &s)-->s-->used in function
}
