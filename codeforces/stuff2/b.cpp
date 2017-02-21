#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	std::string str,str_out="";
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		string ch;
		cin>>ch;
		str+=ch;
		str+="\n";
	}
	//cout<<str.length();
	bool isit=0;
	for(int i=0;i<str.length()-1;i++){
		if(str[i]=='O'&&str[i+1]=='O'&&!isit){
			isit=1;
			str_out+="++";
			i++;
		}
		else str_out+=str[i];
	}
	if(isit){cout<<"YES\n";cout<<str_out;}
	else cout<<"NO";
	return 0;
}
