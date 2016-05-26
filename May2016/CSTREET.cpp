//http://www.spoj.com/problems/CSTREET/
// kruskal
#include <bits/stdc++.h>
using namespace std;
int root(int x,int id[]){
		while(id[x]!=x){
			id[x]=id[id[x]];
			x=id[x];
		}
		return x;
}
void un(int a,int b,int id[]){
	int p = root(a,id);
	int q = root(b,id);
	id[p]=id[q];
}
int main(int argc, char const *argv[])
{	int t;
	cin>>t;
	 while(t--){
	pair<int,pair<int,int> >adj[1010];
	int id[1000];
	int v, e;
	int x,y,weight;
	int p;
	cin>>p>>v>>e;
	for(int i=0;i<e;i++){
		cin>>x>>y>>weight;
		adj[i] = make_pair(weight,make_pair(x,y));
	}
	sort(adj,adj+e);
	for(int i=0;i<v;i++)
		id[i]=i;
	int minCost=0;
	for(int i=0;i<e;i++){
		int a = adj[i].second.first;
		int b = adj[i].second.second;
		if(root(a,id)!=root(b,id)){
			minCost += adj[i].first;
			un(a,b,id);
		}
	}
	cout<<(p*minCost);
	}
	return 0;
}
