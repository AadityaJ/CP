#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define V 100000
using namespace std;
bool isBipartiteUtil(int G[][V], int src, int colorArr[])
{
    colorArr[src] = 1;

    // Create a queue (FIFO) of vertex numbers and enqueue
    // source vertex for BFS traversal
    queue <int> q;
    q.push(src);

    // Run while there are vertices in queue (Similar to BFS)
    while (!q.empty())
    {
        // Dequeue a vertex from queue ( Refer http://goo.gl/35oz8 )
        int u = q.front();
        q.pop();

         // Find all non-colored adjacent vertices
        for (int v = 0; v < V; ++v)
        {
            // An edge from u to v exists and
            // destination v is not colored
            if (G[u][v] && colorArr[v] == -1)
            {
                // Assign alternate color to this
                // adjacent v of u
                colorArr[v] = 1 - colorArr[u];
                q.push(v);
            }

            // An edge from u to v exists and destination
            // v is colored with same color as u
            else if (G[u][v] && colorArr[v] == colorArr[u])
                return false;
        }
    }

    // If we reach here, then all adjacent vertices can
    // be colored with alternate color
    return true;
}
bool isBipartite(int G[][V])
{
    int colorArr[V];
    for (int i = 0; i < V; ++i)
        colorArr[i] = -1;
    for (int i = 0; i < V; i++)
      if (colorArr[i] == -1)
        if (isBipartiteUtil(G, i, colorArr) == false)
           return false;
     return true;
}
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	int G[n][n];
	for(int i=0;i<m;i++){int x,y;cin>>x>>y;G[x][y]=1;G[y][x]=1;}
	cout<<isBipartite(G)
	return 0;
}
