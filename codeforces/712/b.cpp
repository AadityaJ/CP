#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	string str;
	cin>>str;
	int n=str.length();
	if(n%2==1) {cout<<"-1";return 0;}
	int x=0,y=0;
	for(int i=0;i<n;i++){
		if(str[i]=='L') x--;
		if(str[i]=='R') x++;
		if(str[i]=='U') y++;
		if(str[i]=='D') y--;
	}
	//cout<<x<<" "<<y<<endl;
	cout<<(abs(x)+abs(y))/2;
	return 0;
}
