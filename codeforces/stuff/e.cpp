#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool isConsonant(char ch){
	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'y':
			return 0;
	}
	return 1;
}
int main(int argc, char const *argv[]) {
	string str;
	cin>>str;
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
	string s1;
	for(int i=0;i<str.length();i++){
		if(isConsonant(str[i])){
			s1+=".";
			//if(str[i]<='Z') str[i]=str[i]-'A'+'a';
			s1+=str[i];
		}
	}
	cout<<s1;
	return 0;
}
