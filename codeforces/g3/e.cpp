#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MX 100001
using namespace std;
bool color[MX][MX];
int val[MX],col[MX];
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>col[i];
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		int x_c=col[x];
		int y_c=col[y];
		if(x_c==y_c) continue;
		if(!color[x_c][y_c]){
			val[x_c]++;
			val[y_c]++;
			color[x_c][y_c]=color[y_c][x_c]=1;
		}
	}
	int mx=0,index=0;
	for(int i=0;i<MX;i++){
		if(val[i]>mx){mx=val[i];index=i;}
	}
	cout<<index<<endl;
	return 0;
}
