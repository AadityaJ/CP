#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	string str;
	cin>>str;
	bool flg=1;
	for(int i=1;i<str.length();i++){
		if(!(str[i]<='Z')) {flg=0;break;}
	}
	
	return 0;
}
