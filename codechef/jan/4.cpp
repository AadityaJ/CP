#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n,e;
		cin>>n>>e;
		std::vector<int> G[100];
		if(n!=e){cout<<"No\n";continue;}
		for(int i=0;i<e;i++){int x;cin>>x;G[i].push_back(x);}
		dfs(i);
	}
	return 0;
}
