#include<iostream>
#include <vector>
using namespace std;

struct Edge{
    int src,dest;
};

class Graph{
public:
    vector<vector<int>> adjl;
    Graph(vector<Edge> const &edges, int n){
        adjl.resize(n);
        for(auto &edge:edges){
            adjl[edge.src].push_back(edge.dest);
            
        }
    }
};

bool dfs(Graph const &graph,int vertex,vector<bool> &discovered, int parent){
    discovered[vertex]=true;
    for(int v: graph.adjl[vertex]){
        if(!discovered[v]){
            if(dfs(graph,v,discovered,v))
                return true;
        }
        else if(v!=parent)
            return true;    
    }
    return false;
}

int main(){
    vector<Edge> edges={
        {1,2},{2,3},{3,4},{3,1},{5,6},{6,4},
    };
    int n=7;
    Graph graph(edges,n);
    vector<bool> discovered(n,false);
    if (dfs(graph,1,discovered,-1))//graph, startingnode, discovered, parent
        cout<<"CYCLE PRESENT"<<endl;
    else
        cout<<"NO CYCLE"<<endl;
}