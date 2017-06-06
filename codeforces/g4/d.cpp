#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MX 3001
using namespace std;
std::vector<int> G[MX];
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		G[x].push_back(y);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j) continue;
			for(int k=0;k<G[i].size();k++){
				if(G[i][k]!= &&)
			}
		}
	}
	return 0;
}
