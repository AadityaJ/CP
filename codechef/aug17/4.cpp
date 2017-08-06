#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		string str1,str2;
		cin>>str1>>str2;
		if(str1[0]==str2[0]||str1.length()==1){cout<<"B\n";}
		else cout<<"A\n";
	}
	 return 0;
}
