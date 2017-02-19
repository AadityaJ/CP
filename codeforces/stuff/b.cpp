#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	string str;
	cin>>str;
	bool isOut=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='9'||str[i]=='H'||str[i]=='Q'){isOut=1;break;}
	}
	if(isOut) cout<<"YES";
	else cout<<"NO";
	return 0;
}
