#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int b[101];
int main(int argc, char const *argv[]) {
	int n;
	string str;
	cin>>n>>str;
	int x=-1;
	bool goingB=0;
	for(int i=0;i<n;i++){
		if(str[i]=='B' && goingB==1) b[x]++;
		if(str[i]=='B' && goingB==0) {x++;b[x]=1;goingB=1;}
		if(str[i]!='B' && goingB==1) {goingB=0;}
	}
	x++;
	cout<<x<<endl;
	for(int i=0;i<x;i++) cout<<b[i]<<" ";
	return 0;
}
