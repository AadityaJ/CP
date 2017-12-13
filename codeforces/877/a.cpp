#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
string check(string temp){
	if(temp=="Danil") return "Danil";
	if(temp=="Olya") return "Olya";
	if(temp=="Slava") return "Slava";
	if(temp=="Ann") return "Ann";
	if(temp=="Nikita") return "Nikita";

	return "N";
}
int main(int argc, char const *argv[]) {
	string str;
	cin>>str;
	map<string,int> mp;
	int val=0;
	for(int i=0;i<str.length();i++){
		string temp="";
		for(int j=i;j<str.length();j++){
			temp+=str[j];
			string ch=check(temp);
			if(ch!="N"){
				val++;
				mp[ch]++;
			}
		}
	}
	if(val==1){cout<<"YES\n";}
	else cout<<"NO\n";
	return 0;
}
