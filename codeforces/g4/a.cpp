#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MX 100001
using namespace std;
std::vector<int> G[MX];
bool visited[MX];
int v,e;
void dfs(int x){
	visited[x]=1;
	v++;
	e+=(G[x].size());
	for(int i=0;i<G[x].size();i++){
		if(!visited[G[x][i]]) dfs(G[x][i]);
	}
}
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			v=0;
			e=0;
			dfs(i);
			e/=2;
			ans+=(v>e)?(v-e):(0);
		}
	}
	cout<<ans<<endl;
	return 0;
}
// should think a little bit more about the usecases
