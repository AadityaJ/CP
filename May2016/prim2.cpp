#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <functional>
using namespace std;
typedef pair<long long,int> pii;
vector <pii> adj[1000];
bool marked[1000];
long long prim(int x){
	priority_queue <pii,std::vector<pii>,greater<pii> >q;
	pii p;
	long long minCost=0;
	q.push(make_pair(0,x));
	while(!q.empty()){
		p = q.top();
		q.pop();
		x = p.second;
		if(marked[x]) continue;
		minCost+=p.first;
		marked[x]=true;
		for(int i=0;i<adj[x].size();i++){
			int y = adj[x][i].second;
			if(!marked[y])
				q.push(adj[x][i]);
		}
	}
	return minCost;
}
int main(int argc, char const *argv[])
{
	int nodes, edges, x, y;
    long long weight, minimumCost;
    cin >> nodes >> edges;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;
        adj[x].push_back(make_pair(weight, y));
        adj[y].push_back(make_pair(weight, x));
    }
    // Selecting 1 as the starting node
    minimumCost = prim(1);
    cout << minimumCost << endl;
    return 0;
}