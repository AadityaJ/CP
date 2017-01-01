//http://codeforces.com/problemset/problem/522/A
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
string toLow(string str){
	string lw;
	int x=0;
	for(int i=0;i<str.length();i++){
		char a=tolower(str[i]);
		//lw[x++]=a;
		lw+=a;
	}
	return lw;
}
int main(int argc, char const *argv[]) {
	int x;
	cin>>x;
	string nm1,nm2,nm3;
	string lab[1000];
	std::map<string,int> mp;
	mp["polycarp"]=1;
	int mx=0;
	for(int i=0;i<x;i++) {
		cin>>nm1;
		cin>>nm2;
		cin>>nm3;
		nm1=toLow(nm1);
		nm3=toLow(nm3);
		mp[nm1]=mp[nm3]+1;
	//	cout<<mp[nm1]<<endl;
		if(mx<mp[nm1])mx=mp[nm1];

	}
	cout<<mx;
	return 0;
}
