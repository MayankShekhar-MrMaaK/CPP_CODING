#include <climits>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> subset(int arr[], int sumi, int n){
    vector<vector<int>> v(n+1,vector<int>(sumi+1));
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sumi+1;j++){
            if(i==0)
                v[i][j]=0;//false
            if(j==0)
                v[i][j]=1;//true
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sumi+1;j++){
            if (arr[i-1]<=j)
                v[i][j]= v[i-1][j-arr[i-1]] || v[i-1][j];
            else
                v[i][j]=v[i-1][j];
        }
    }

    vector<int> ans;
    for (int j=0;j<sumi+1;j++)
        if(v[n][j]==1)
            ans.push_back(j);
    
    return ans;
}

int main(){
    cout<<"Enter size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sumi=0;
    for(int i: arr)
        sumi+=i;
    vector<int> ans;
    ans=subset(arr,sumi,n);
    int mn=INT_MAX;
    for(int i=0;i<ans.size()/2+1;i++)
        mn=min(mn, abs(sumi-2*ans[i]));
    cout<<"Minimum subset sum difference= "<<mn<<endl;
}