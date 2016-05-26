// kruskal
#include <bits/stdc++.h>
using namespace std;
pair<int,pair<int,int> >adj[1000];
int id[1000];
int v, e;
void initialise(){
	cout<<endl<<v<<endl;
	for(int i=0;i<v;i++)
		id[i]=i;
}
int root(int x){
	while(id[x]!=x){
		id[x]=id[id[x]];
		x=id[x];
	}
	return x;
}
void un(int a,int b){
	int p = root(a);
	int q = root(b);
	id[p]=id[q];
}
int kruskal(){
	initialise();
	int minCost=0;
	for(int i=0;i<e;i++){
		int a = adj[i].second.first;
		int b = adj[i].second.second;
		if(root(a)!=root(b)){
			minCost += adj[i].first;
			un(a,b);
		}
	}
	return minCost;
}
int main(int argc, char const *argv[])
{
	int x,y,weight;
	cin>>v>>e;
	for(int i=0;i<e;i++){
		cin>>x>>y>>weight;
		adj[i] = make_pair(weight,make_pair(x,y));
	}
	sort(adj,adj+e);
	int minCost = kruskal();
	cout<<minCost;
	return 0;
}