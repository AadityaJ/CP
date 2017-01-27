//http://www.spoj.com/problems/HERDING/
#include <iostream>
#include <queue>
using namespace std;
int main(int argc, char const *argv[])
{
	queue <int> q;
	int n,m;
	cin>>n>>m;
	int count=0;
	char mat[n][m];
	bool n_mat[n][m];
	for(int i=0;i<(n);i++){
		for(int j=0;j<m;j++){
			cin>>mat[i][j];
			mat[i][j]=1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(n_mat[i][j]){
				
			}
		}
	}

	return 0;
}