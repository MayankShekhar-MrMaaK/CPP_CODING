#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Disjoint{
    unordered_map<int,int> parent;
    unordered_map<int,int> rank;


public:
    void makeset(vector<int> const &arr){
        for(int i:arr){
            parent[i]=i;
            rank[i]=0;
        }
    }

    int root(int data){
        if(parent[data]!=data)
            parent[data]=root(parent[data]);//Path compression
        
        return parent[data];
    }
    void qunion(int x, int y){
        int p=root(x);
        int q=root(y);
        
        if(p==q)
            return;

        if (rank[p] > rank[q])
            parent[q] = p;
        else if (rank[p] < rank[q])
            parent[p] = q;
        else
        {
            parent[p] = q;
            rank[q]++;
        }
    }
};

void qfind(vector<int> const &arr, Disjoint &ds){
        for(int i:arr)
            cout<<ds.root(i)<<"..";
        cout<<endl;
    }
int main(){
    vector<int> arr { 1,2,3,4,5};
    Disjoint ds;
    ds.makeset(arr);
    qfind(arr,ds);
    ds.qunion(1,3);
    qfind(arr,ds);
    ds.qunion(2,4);
    qfind(arr,ds);
    ds.qunion(1,4);
    ds.qunion(2,5);
    qfind(arr,ds);
}
