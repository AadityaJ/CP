#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 1001
using namespace std;
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	char str[n][m];
	int row[n],col[m];
	for(int i=0;i<n;i++) row[i]=0;
	for(int i=0;i<m;i++) col[i]=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char ch;
			cin>>ch;
			str[i][j]=ch;
			if(ch=='*'){
				row[i]++;
				col[j]++;
			}
		}
	}
	int c_r=0,c_c=0;
	int index_r=1,index_c=1;
	for(int i=0;i<n;i++){
		if(row[i]>0){
			c_r++;
			index_r=i;
		}
	}
	for(int i=0;i<m;i++){
		if(col[i]>0){
			c_c++;
			index_c=i;
		}
	}
	if(c_r<=1 && c_c<=1){cout<<"YES\n"<<c_r<<" "<<c_c;}
	else cout<<"NO"<<c_r<<c_c;
	return 0;
}
