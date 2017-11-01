#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MX 4000007
bool vis[MX];
using namespace std;
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	int a1[n];
	int a2[n];
	for(int i=0;i<n;i++) {cin>>a1[i];vis[a1[i]]=1;}
	for(int i=0;i<n;i++) {cin>>a2[i];vis[a2[i]]=1;}
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(vis[a1[i]^a2[j]]) ans++;
		}
	}
	if(ans%2) cout<<"Koyomi\n";
	else cout<<"Karen\n";
	return 0;
}
