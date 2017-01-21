#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	string s1,s2;
	cin>>s1>>s2;
	string s;
	s+=(s1[0]);
	s+=(s1[s1.length()-1]);
	s+=(s2[0]);
	s+=(s2[s2.length()-1]);
//	cout<<s<<endl;
	if(s=="><^v"|| s=="<>v^"){cout<<"YES";}
	else cout<<"NO";
	return 0;
}
