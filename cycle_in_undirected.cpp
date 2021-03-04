#include<iostream>
#include <vector>
using namespace std;

struct Edge{
    int src, dest;
};

class Graph{
public:
    vector< vector<int>> adjl;
    Graph( vector<Edge> const &edges, int n){// CONSTRUCTOR
        adjl.resize(n);

        for(auto &edge: edges){
            adjl[edge.src].push_back(edge.dest);
            adjl[edge.dest].push_back(edge.src);
        }
    }
};

bool dfs(Graph const &graph, int vertex, vector<bool> &discovered, int parent){
    discovered[vertex]=true;

    for(int v :graph.adjl[vertex]){
        if(!discovered[v]){
            if(dfs(graph, v, discovered, vertex))
                return true;
        }
        else if(v!=parent) {
            //if node is discovered and is not a current parent--then BINGO[CYCLE IS THERE]
            return true;
        }
    }
    return false;
}

int main(){
    vector<Edge> edges =
    {
        {1, 2}, {1, 4}, {2, 5}, {2, 4}, {5, 6}, {3, 6},
    };

    int n=7;    // no.of vertices =  no. of edges + 1
    Graph graph(edges, n);
    vector<bool> discovered(n, false);

    if(dfs(graph, 1, discovered, -1))
        cout<<"CONTAINS CYCLE"<<endl;
    else
        cout<<"NO CYCLE"<<endl;
}
/* TIME COMPLEXITY--> O(n+m) n-> no. of vertices
                             m-> no. of edges
Graph--adjlist< < > >
[
    1->[2,4]
    2->[1,5,4]
    3->[6]
    4->[1,2]
    5->[2,6]
    6->[5,3]
]
*/