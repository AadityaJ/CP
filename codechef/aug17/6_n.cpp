#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;
string con2bits(int c,int n){
    string str="";
    for(int i=0;i<(n-c-1);i++) str.push_back('0');
    str.push_back('1');
    for(int i=0;i<c;i++) str.push_back('0');

    return str;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n,q;
        cin>>n>>q;
		long long int mx=pow(2,n);
        long long int ans=0;
        long long int parent=1;
		set<long long int>s;
		s.insert(1);
		long long int x=0;
		for(int i=0;i<q;i++){
			char ch;
			cin>>ch;
			if(ch=='!'){
				int c;
				cin>>c;
				long long in=pow(2,c);
				x=((x)%mx+(in%mx))%(mx);
				string str=con2bits(x,n);
				cout<<x<<" "<<str<<endl;
				parent=1;
				s.insert(parent);
				for(int i=0;i<str.length();i++){
					if(str[i]=='0'){
						parent*=2;
					}else{
						parent=(parent*2)+1;
					}
					s.insert(parent);
				}
			}
			else{
				//cout<<s.size()<<endl;
			}
		}
	}
	 return 0;
}
