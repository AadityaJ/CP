#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	string str;
	cin>>str;
	int ans=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='Q'){
			for(int j=i+1;j<str.length();j++){
				if(str[j]=='A'){
					for(int k=j+1;k<str.length();k++){
						if(str[k]=='Q') ans++;
					}
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
