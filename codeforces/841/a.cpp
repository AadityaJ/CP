#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	string str;
	cin>>str;
	int mp[26]={0};
	for(int i=0;i<str.length();i++){
		mp[str[i]-'a']++;
	}
	bool is=1;
	for(int i=0;i<26;i++){
		if(mp[i]>m){is=0;break;}
	}
	if(is) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}
