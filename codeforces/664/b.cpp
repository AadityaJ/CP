#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	string str;
	//cin>>str;
	getline(cin,str);
	int num=0;
	int i=0;
	for(i=0;str[i]!='=';i++);//cout<<str[i];
	i+=2;
	for(int x=i;x<str.length();x++){
		num+=(str[x]-'0');
		num*=10;
	}
	num=(num/10);
	int pos=0,neg=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='+') pos++;
		if(str[i]=='-') neg++;
	}
	//cout<<pos << " "<<neg;
	int h=(num+neg-pos);
	if(!(1<=h && h<=num)) {cout<<"Impossible";return 0;}
	cout<<"Possible"<<endl;
	//cout<<h<<" ";
	int cnt=0;
	for(int i=0;i!=str.length();i++){
		if(str[i]=='?' && cnt==0) {cout<<h;cnt=1;continue;}
		else if(str[i]=='?' && cnt!=0) {cout<<"1";}
		else cout<<str[i];
	}

	return 0;
}
