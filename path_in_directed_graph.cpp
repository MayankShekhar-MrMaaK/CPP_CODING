#include <iostream>
#include <vector>
using namespace std;

// Utility function to print a vector
void printPath(const vector<int> &path)
{
	for (int i: path)
		cout << i << ' ';
	cout << endl;
}

// Function to perform DFS traversal in a directed graph to find the
// complete path between source and destination vertices
void printAllPaths(const vector<vector<int>> &edges, int src, int dest,
		vector<bool> &discovered, vector<int> &path)
{
	// mark current node as discovered
	discovered[src] = true;

	// include current node in the path
	path.push_back(src);

	// print the complete path if destination vertex is found
	if (src == dest) {
		printPath(path);
	}

	// do for every edge (src -> i)
	for (int i: edges[src])
	{
		// proceed if u is not discovered
		if (!discovered[i]) {
			printAllPaths(edges, i, dest, discovered, path);
		}
	}

	// backtrack: remove current node from the path & mark it as not discovered
	path.pop_back();
	discovered[src] = false;
}

int main()
{
	// vector of graph edges as per above diagram
	vector<vector<int>> edges{{1,2},{3},{3},{}};

	// Number of nodes in the graph (labelled from 0 to N-1)
	int N = edges.size();

	// stores vertex is discovered or not
	vector<bool> discovered(N);

	// source and destination vertex
	int src = 0, dest = N-1;

	// vector to store the complete path between source and destination
	vector<int> path;

	// perform DFS traversal from the source vertex to check the connectivity
	// and print all paths from the source vertex to the destination vertex
	printAllPaths(edges, src, dest, discovered, path);

	return 0;
}