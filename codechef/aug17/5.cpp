#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
void f(string str,set<string> &s){
	set<string> :: iterator it;
	it=s.find(str);
	if(it!=s.end()) return ;
	s.insert(str);
	//cout<<str<<" ";
	for(int i=0;i<str.length()-1;i++){
		if(str[i]>'0' && str[i+1]>'0'){
			str[i]=((str[i]-'0')-1)+'0';
			str[i+1]=((str[i+1]-'0')-1)+'0';
			if(i+2!=str.length()){
				str[i+2]=((str[i+2]-'0')+1)+'0';
				f(str,s);
				str[i]=((str[i]-'0')+1)+'0';
				str[i+1]=((str[i+1]-'0')+1)+'0';
				str[i+2]=((str[i+2]-'0')-1)+'0';
			}else{
				str.push_back('1');
				f(str,s);
			}
		}
	}
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x;
		string str="";
		for(int i=0;i<n;i++){
			cin>>x;
			str.push_back(x+'0');
		}
		set<string> s;
		f(str,s);
		cout<<s.size()<<endl;
	}
	 return 0;
}
