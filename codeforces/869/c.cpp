#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	string str;
	cin>>str;
	if(str.length()<6) cout<<"no\n";
	else{
		int num_1=0;
		for(int i=0;i<6;i++){
			if(str[str.length()-1-i]=='1') num_1++;
		}
		
	}
	return 0;
}
