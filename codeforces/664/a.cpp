#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	string s1,s2;
	cin>>s1>>s2;
	if(s1.compare(s2)==0) cout<<s1;
	else cout<<1;
	return 0;
}
