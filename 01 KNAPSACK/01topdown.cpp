#include <cstring>
#include <iostream>
using namespace std;
int main(){
    int val[] = {20,5,10,40,15,25}; 
    int wt[] = {1,2,3,8,7,4};
    int W=10;
    int n= sizeof(wt)/sizeof(wt[0]);
    int t[n+1][W+1];
    memset(t,0,sizeof(t));
    for(int i=1;i<n+1;i++){
        for(int j=1;j<W+1;j++){
            if(wt[i-1]<=j)
                t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
            else
                t[i][j]=t[i-1][j];
        }
    }
    cout<<"\n the profit is "<<t[n][W]<<endl;
    return 0;
}