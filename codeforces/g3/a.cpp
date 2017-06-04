#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MX 100005
using namespace std;
int p[MX][MX];
void init(){
	for(int i=0;i<MX;i++){
		for(int j=0;j<MX;j++) p[i][j]=i;
	}
}
int root(int x,int i){
	while(p[x][i]!=x){
		x=p[x][i];
	}
	return x;
}
int main(int argc, char const *argv[]) {
	init();
	int n,m;
	cin>>n>>m;
	int mx_c=0;
	for(int i=0;i<m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		int x=root(a,c);
		int y=root(b,c);
		p[x][c]=y;
		mx_c=max(mx_c,c);
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int x,y;
		cin>>x>>y;
		int ans=0;
		for(int j=1;j<=mx_c;j++)
			if(root(x,j)==root(y,j)) ans++;
		cout<<ans<<endl;
	}

	return 0;
}
