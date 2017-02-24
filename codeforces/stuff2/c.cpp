#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 3001
using namespace std;
bool g[3001][3001];
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	std::vector<int> neigh[MAX];
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		neigh[a].push_back(b);
		g[a][b]=1;
	}
	int result=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j){
				int r=0;
				for(int b=0;b<neigh[i].size();b++){
					if(g[neigh[i][b]][j]&&neigh[i][b]!=i&&neigh[i][b]!=j) r++;
				}
				result+=(r*(r-1))/2;
			}
		}
	}
	cout<<result;
	return 0;
}
