#include <cstring>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Global Scope comparator
int f(int x,int y){
    return x>y;
}
int main(){
    int arr[9];
    memset(arr,-9,sizeof(arr));
    cout<<arr[8]<<"hvh";
    int n=sizeof(arr)/sizeof(arr[0]);
    
    vector<int> A(arr,arr+n);//Converting array into Vector    
    //First element----------------------------------
    cout<<*(A.begin())<<endl;
    //Last element------------------------------------
    cout<<*(A.begin()+A.size()-1)<<endl;
    
    //-------------------------------------------------
    //Traversing using iterator
    vector<int>::iterator it;

    cout<<"Printing elements of vector"<<endl;
    for(it=A.begin();it!=A.end();it++){
        cout<< *it<<" ";
    }
    cout<<endl;
    //-------------------------------------------------
    //Sorting --Reverse, using comparator f[defined in Global scope]
    sort(A.begin(),A.end());//or using comparator(...)
    for(int x:A){
        cout<<x<<" ";
    }
    cout<<endl;
    reverse(A.begin(),A.end());
    //sort(A.begin(),A.end(),f);//or using comparatorwithin sort
    for(int x:A){
        cout<<x<<" ";
    }
    //-------------------------------------------------
    //Finding
    if(find(A.begin(),A.end(),76)!=A.end()){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;//if not found find(...) returns iterator A.end()
    //---------------------------------------------------
    return 0;
//Includes all operation of Vector-STL
}
}

