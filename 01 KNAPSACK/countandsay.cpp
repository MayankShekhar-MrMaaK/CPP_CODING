#include <iostream>
#include <string>
using namespace std;

string countandsay(int n){
    if(n==1)
        return "1";
    if(n==2)
        return "11";
    string s="11";
   
    for(int i=3;i<=n;i++){
        s+="&";
        int count=1;
        string t="";
        for(int j=1;j<s.length();j++){
            if(s[j]!=s[j-1]){
                t=t+to_string(count);
                t=t+s[j-1];
                count=1;
            }
            else
                count++;
        }
        s=t;
    }
    return s;
}

int main(){
    int n;
    cout<<"ENTER THE RANGE "<<endl;
    cin>>n;
    cout<<countandsay(n)<<endl;
}