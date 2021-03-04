#include <algorithm>
#include <cstring>
#include<iostream>
using namespace std;
int t[100][100];//constraints=100
int knapsack(int wt[],int val[],int W, int n){
    //---------------------------------------------------- 
    //BASE CONDITION
    if(n==0 || W<=0)//TILL EVERY ELEMENT IS PROCESSED [OR] CAPCITY<=0
        return 0;
    //---------------------------------------------------- 
    //MEMORIZATION CHECK
    if(t[n][W]!=-1)
        return t[n][W];
    //----------------------------------------------------
    //CHOICE
    if(wt[n-1]<=W){//TO ACCEPT OR NOT ,,GET MAX PROFIT FROM EITHER.
        t[n][W]=max((val[n-1]+knapsack(wt,val,W-wt[n-1],n-1)),//TO ACCEPT
                    knapsack(wt,val,W,n-1)); //NOT TO ACCEPT
        return t[n][W];
    }
    else{// NOT TO ACCEPT
        t[n][W]= knapsack(wt,val,W,n-1);
        return t[n][W];
    }
    //----------------------------------------------------  
}
int main(){
    int val[] = {20,5,10,40,15,25}; 
    int wt[] = {1,2,3,8,7,4};
    int W=10;
    memset(t,-1,sizeof(t));
    int n=sizeof(wt)/sizeof(wt[0]);
    cout<<"\nThe max profit is "<<knapsack(wt,val,W,n)<<endl;
}

//NOTE
//in recursive memorization[bottom up], just return function value
//in top down return t[][], m*n. 