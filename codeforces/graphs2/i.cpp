#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 4010
using namespace std;
int G[MAX][MAX];
int size[MAX];
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
//	int G[n+1][n+1];
//	int size[n+1];
//	for(int i=1;i<=n;i++) size[i]=0;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		G[a][b]=1;
		G[b][a]=1;
		size[a]++;
		size[b]++;
	}
	//for(int i=1;i<=n;i++) cout<<size[i]<<" ";
	//cout<<endl;
	int mx=100000;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(G[i][j]){
				for(int k=j+1;k<=n;k++){
					if(G[i][j]&&G[i][k]&&G[j][k]){
						int val=size[i]-2;
						val+=size[j]-2;
						val+=size[k]-2;
						if(val<mx) mx=val;
	//					cout<<val<<endl;
					}
				}
			}
		}
	}
	if(mx==100000) cout<<"-1";
	else cout<<mx;
	return 0;
}
