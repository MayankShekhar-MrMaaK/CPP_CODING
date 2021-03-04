#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int arr[2][2]={-1};
void fun(vector<int> &aq){ //vector is to be passed by reference...whereas array is defaulty passed by reference.
    aq[0]=456;
    arr[0][0]=3421;
    for(int i: aq)
        cout<<i<<" ";
}
int main() {
    vector<int> as={2,4,0,4,9};

    for(int i: as)
        cout<<i<<" ";
    cout<<endl;
    fun(as);
    cout<<endl;
    if(find(as.begin(),as.end(),12)!=as.end()){
        cout<<"present";
    }
    else cout<<"not present";
    cout<<"dfdf"<<arr[0][0];
    for(int i: as)
        cout<<i<<" ";
    return 0;
}
    //Vector are passed by Value default
    //to pass it as a reference,
    //fun(arr)
    //fun(vector<int> &s)-->s-->to be used in function