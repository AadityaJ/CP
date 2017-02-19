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
	if(flg){
		if(str[0]>'Z') str[0]=str[0]-'a'+'A';
		else str[0]=str[0]-'A'+'a';
		for(int i=1;i<str.length();i++){
			str[i]=str[i]-'A'+'a';

		}
	}
	cout<<str;
	return 0;
}
