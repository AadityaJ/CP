#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool checkifPalin(string str){
	for(int i=0;i<str.length();i++){
		if(str[i]!=str[str.length()-i-1]){return 0;}
	}
	return 1;
}
int main(int argc, char const *argv[]){
	string str;
	cin>>str;
	bool is=1;
	for(int i=0;i<str.length();i++){
		string temp="";
		for(int j=i;j<str.length();j++){
			temp+=str[j];
			bool ch=checkifPalin(temp);
			if(ch && (temp.length()%2==0)){is=0;break;}
		}
	}
	//cout<<is<<endl;
	if(is){cout<<"Odd .\n";}
	else cout<<"Or not .\n";
	return 0;
}
