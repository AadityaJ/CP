#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	string s1,s2;
	cin>>s1>>s2;
	if(s1==s2){cout<<-1;}
	else cout<<max(s1.length(),s2.length());
	return 0;
}
