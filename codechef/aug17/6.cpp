#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string con2bits(int c,int n){
    string str="";
    while(c){
        str+=(c%2)+'0';
        c/=2;
    }
    while(str.length()!=n){
        str+='0';
    }
    reverse(str.begin(),str.end());
    return str;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n,q;
        cin>>n>>q;
        long long int ans=0;
        string x="";
        vector<string> v;
        for(int i=0;i<q;i++){
            char ch;
            cin>>ch;
            if(ch=='?'){cout<<ans<<endl;}
            else{
                int c;
                cin>>c;
                string str=con2bits(c,n);
                cout<<str<<endl;
                //x=add(x,str);
                //ans+=f(str,v);
            }
        }
	}
	 return 0;
}
