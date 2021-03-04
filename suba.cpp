#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int> odd;
    vector<int> even;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0; i<n;i+=2)
        odd.push_back(arr[i]);
    for(int i=1; i<n;i+=2)
        even.push_back(arr[i]);
    odd.insert(odd.end(),even.begin(),even.end());
    for(int i=0;i<odd.size();i++)
        cout<<odd[i]<<" ";

}