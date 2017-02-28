#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	bool arr[26]={0};
	string str;
	int n;
	cin>>n;
	cin>>str;
	int unique=0;
	for(int i=0;i<str.length();i++){
		if(arr[str[i]-'a']==0) unique++;
		arr[str[i]-'a']=1;
	}
	int x=str.size()-unique;
	if(x>=26 || n>26) cout<<-1;
	else cout<<x;
	return 0;
}
