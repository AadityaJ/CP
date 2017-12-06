#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
#define MX 100009
using namespace std;
void dfs(vector<int> G[MX],int n,int m,int *w,int i,int &mn,bool *visited){
	if(visited[i]) return ;
	mn=min(mn,w[i]);
	visited[i]=1;
	for(int j=0;j<G[i].size();j++){
		dfs(G,n,m,w,G[i][j],mn,visited);
	}
}
long long int ans(vector<int> G[MX],int n,int m,int *w){
	bool *visited=new bool[n+1];
	for(int i=1;i<=n;i++) visited[i]=0;
	long long int sm=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			int mn=INT_MAX;
			dfs(G,n,m,w,i,mn,visited);
			sm+=mn;
		}
	}
	return sm;
}
int main(int argc, char const *argv[]){
	int n,m;
	cin>>n>>m;
	vector<int> G[MX];
	int arr[n+1];
	for(int i=1;i<=n;i++) cin>>arr[i];
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		G[x].push_back(y);
		G[y].push_back(x);
	}
	cout<<ans(G,n,m,arr)<<endl;
	return 0;
}
