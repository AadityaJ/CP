#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n;
	bool isit=0;
	cin>>n;
	while(n--){
		string str;
		int n1,n2;
		cin>>str;
		cin>>n1>>n2;
		if(n1>=2400 && n2>n1&&!isit){cout<<"YES";isit=1;}
	}
	if(!isit) cout<<"NO";
	return 0;
}
