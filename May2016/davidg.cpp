#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;
int prim(int x,vector <pi>& adj){
	priority_queue <pi,std::vector<pi>,greater<pi> >q;
	pi p;
	int minCost=0;
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
	int t;
	cin>>t;
	while(t--){
		bool marked[1000];
		int n,p;
		cin>>n>>p;
		int x[n],y[n];
		bool m[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				m[i][j]=false;
		std::vector<pi> v[n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(!m[i][j])
					int dist=((x[i]*x[j])*(x[i]*x[j]))+((y[i]-y[j])*(y[i]-y[j]));
					v[i].push_back(make_pair(j,dist));
					v[j].push_back(make_pair(i,dist));
					m[i][j]=true;
					m[j][i]=true;
			}
		}
		int mincost = prim(0,v);




	}
	return 0;
}