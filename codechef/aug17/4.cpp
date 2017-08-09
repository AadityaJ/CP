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
		int mp1[26]={0};
		int mp2[26]={0};
		for(int i=0;i<str1.length();i++){
			mp1[str1[i]-'a']++;
			mp2[str2[i]-'a']++;
		}
		bool is=1;
		for(int i=0;i<26;i++){
			if(mp1[i]>1){
				if(mp2[i]==0) {is=0;break;}
			}
		}
		bool isX=1,isX2=0;
		for(int i=0;i<26;i++){
			if(mp2[i]>0 && mp1[i]==0) {isX=0;break;}
		}
		if(isX){
			for(int i=0;i<26;i++){
				if(mp1[i]>0 && mp2[i]==0){
					isX2=1;
					break;
				}
			}
		}
		//cout<<isX<<" "<<isX2<<endl;
		if(isX && isX2) is=0;
		if(is) cout<<"B\n";
		else cout<<"A\n";
	}
	 return 0;
}
