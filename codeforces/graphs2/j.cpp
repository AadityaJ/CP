#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
#define MAX 4001
using namespace std;
bool G[MAX][MAX];
int degree[MAX];
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		G[x][y]=1;
		G[y][x]=1;
		degree[x]++;
		degree[y]++;
	}
	int mn=INT_MAX;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(G[i][j]){
				for(int k=j+1;k<=n;k++){
					if(G[i][k] && G[j][k]) mn=min(mn,degree[i]+degree[j]+degree[k]);
				}
			}
		}
	}
	if(mn==INT_MAX) cout<<"-1"<<endl;
	else cout<<(mn-6)<<endl;
	return 0;
}
