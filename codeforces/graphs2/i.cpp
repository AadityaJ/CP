#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 30010
using namespace std;
int visited[MAX];
std::vector<int> G[MAX];
void dfs(int a){
	visited[a]=1;
	//cout<<a<<" ";
	for(int i=0;i<G[a].size();i++){
		if(!visited[G[a][i]]) dfs(G[a][i]);
	}
}
int main(int argc, char const *argv[]) {
	int n,t;
	cin>>n>>t;
	int arr[n+1];
	for(int i=1;i<n;i++) cin>>arr[i];
	for(int i=1;i<n;i++){
		//cout<<i<<" "<<arr[i]+i<<endl;
		G[i].push_back(arr[i]+i);
	}
	/*for(int i=1;i<=n;i++){
		cout<<endl;
		for(int j=0;j<G[i].size();j++) cout<<G[i][j]<<" ";
	}*/
	dfs(1);
	if(visited[t]) cout<<"YES";
	else cout<<"NO";
	return 0;
}
