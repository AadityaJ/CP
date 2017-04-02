#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int dp_val[5000][5000];
int cnt;
int xor_val(std::vector<int> s,int i,int j,int n){
	int val=0;
	for(int x=1;x<i;x++){
		val^=s[x];
	}
	for(int x=j+1;x<=n;x++){
		val^=s[x];
	}
	return val;
}
int dp(std::vector<int> s,int n){
	int val=0;
	for(int x=1;x<=n;x++){
		dp_val[1][x]=xor_val(s,1,x,n);
		if(dp_val[1][x]==0) cnt++;
	}
	for(int x=2;x<=n;x++){
		for(int y=1;y<=n;y++){
			dp_val[x][y]=dp_val[x-1][y]^(s[x]);
			if(dp_val[x][y]==0) cnt++;
		}
	}
}

int main(int argc, char const *argv[]) {
	int n;
    cin >> n;
    vector<int> s(n+1);
    for(int s_i = 1; s_i <=n; s_i++){
       cin >> s[s_i];
    }
	dp(s,n);
    /*int arr[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			arr[i][j]=-100;
		}
	}*/
	cout<<cnt;
    return 0;
}
