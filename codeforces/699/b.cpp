#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 1001
using namespace std;
int v[MAX],g[MAX];
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	string str[MAX];
	for(int i=0;i<n;i++) cin>>str[i];
	int tot_st=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(str[i][j]=='*'){
				v[i]++;
				g[j]++;
				tot_st++;
			}
		}
	}
	bool flg=0;
	for(int i=0;i<n&&flg==0;i++){
		for(int j=0;j<m&&flg==0;j++){
			int cnt=v[i]+g[j];
			if(str[i][j]=='*'){
				cnt--;
			}
			if(cnt==tot_st){cout<<"YES\n"<<i+1<<" "<<j+1;flg=1;break;}
		}
	}
	if(flg==0) cout<<"NO";
	return 0;
}
