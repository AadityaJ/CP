#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#define MX 101
using namespace std;
std::vector<int> G[MX];
int degree[MX];
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		G[x].push_back(y);
		G[y].push_back(x);
		degree[x]++;
		degree[y]++;
	}
	queue<int> q;
	queue<int> q1;
	for(int i=1;i<=n;i++){
		if(degree[i]==1){q.push(i);}
	}
	int ans=0;
	while(!q.empty()){
		while(!q.empty()){
			int x=q.front();
			q.pop();
			q1.push(x);
		}
		while(!q1.empty()){
			int x=q1.front();
			q1.pop();
			for(int i=0;i<G[x].size();i++){
				degree[G[x][i]]--;
				if(degree[G[x][i]]==1){
					q.push(G[x][i]);
				}
			}
		}
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
