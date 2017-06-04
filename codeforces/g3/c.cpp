#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MX 101
using namespace std;
std::vector<int> G[MX];
bool visited[MX];
void dfs(int i){
	visited[i]=1;
	for(int x=0;x<G[i].size();x++){
		if(!visited[G[i][x]]) dfs(G[i][x]);
	}
}
bool conn(int n){
	dfs(1);
	for(int i=1;i<=n;i++){
		if(!visited[i]) return 0;
	}
	return 1;
}
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		G[x].push_back(y);
		G[y].push_back(x);
	}
	if(n!=m) cout<<"NO\n";
	else{
		if(conn(n)) cout<<"FHTAGN!\n";
		else cout<<"NO\n";
	}
	return 0;
}
