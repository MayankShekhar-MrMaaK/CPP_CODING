#include<iostream>
#include<algorithm>
#define loop(i,m,n) for(int i=m;i<n;i++)
using namespace std;
int stair(int arr[],int n){
    int dp[n+1];
    loop(i,0,n+1) dp[i]=-1;
    dp[n]=0;

    for(int i=n-1;i>=0;i--){
        if(arr[i]>0){
            int m=INT_MAX;
            for(int j=1;j<=arr[i] and i+j<n+1 ;j++){
                if(dp[i+j]!=-1)
                    m=min(m,dp[i+j]);
            }
        
            if(m!=INT_MAX) dp[i]=m+1;
            else dp[i]=-1;
        }
        else dp[i]=-1;
    }
    return dp[0];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    loop(i,0,n) {
        cin>>arr[i];
        if (arr[i]==0) arr[i]=-1;//not a path
    }
    cout<<stair(arr,n)<<"\n";
}

/*
Climb Stairs With Minimum Moves
https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/climb-stairs-with-minimum-moves-official/ojquestion?__cf_chl_jschl_tk__=ec5351e6ad46588e337a470423fd90fecdf4c725-1619433794-0-AcRQ5bJUhK5Kk3VKzwSAs-u6w3_NU0BsiCME6ux_MJP9pNT9E7OC3ShYHPXbjIYyUrKqR4j7cKRfEEdQecxRUOBn_smpJ-kcml8gMs7ajE32P1RZJrzVqhNTdsQ2oLVGz7MGKk9gkWOvfD8ywD3o8QPfk_rST8jaJADRU4AEJOvOHz1fa2OUn61l30JGKSoh_x41K3TOJGX4puBbZ3CnvdJOLcYj9IrvUGfriQXjfTxZlb5j0i_NOPKQppgGZDLOqXrfJZo2nvnX6XgJFpuIKrmydQBi_zLOKr0LwP5iqQvO6gsEYla0OCvxU6qaZog6-_em9bTHWc4-xeE3rWT0v1VmLUwnF_RGgpdqYoQtolPnkFXlrl84lbNwU3M4X7IBVkd0P9X2DdzLmZGwzYjfE3DPTlt8oVTtjI4VHce355atC2RoPHvDUrq3_QWZZP4CoK0ywEw6isdPYu4KW5-8PZGeYKgrkAILmhveZSDyLbyxGVnv1VIb3_UivIdwv4ofVcolVCW2DEVdx8fMtrnpC88
1. You are given a number n, representing the number of stairs in a staircase.
2. You are on the 0th step and are required to climb to the top.
3. You are given n numbers, where ith element's value represents - till how far from the step you 
     could jump to in a single move.  You can of-course fewer number of steps in the move.
4. You are required to print the number of minimum moves in which you can reach the top of 
     staircase.
input:
10
3 3 0 2 1 2 4 2 0 0
output:
4
*/