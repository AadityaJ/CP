#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
long long int f(vector<string> &v,string str){
    for(int i=0;i<str.length();i++){
        bool is=0;
        char c=str[i];
        for(int j=0;j<v.size();j++){
            if(v[j][i]==c){is=1;break;}
        }
        if(!is){v.push_back(str);return str.length()-i;}
    }
    return 0;
}
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
string add(string a,string b){
    int ca=0;
    string c="";
    for(int i=0;i<a.length();i++){
        int ax=a[i];
        int bx=b[i];
        int cx=(ax+bx+ca)%2;
        ca=(ax+bx+ca)/2;
        c.push_back(cx+'0');
    }
    reverse(c.begin(),c.end());
    return c;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n,q;
        cin>>n>>q;
        long long int ans=0;
        string x="";
        for(int i=0;i<n;i++) x.push_back('0');
        vector<string> v;
        for(int i=0;i<q;i++){
            char ch;
            cin>>ch;
            if(ch=='?'){cout<<ans<<endl;}
            else{
                int c;
                cin>>c;
                string str=con2bits(c,n);
                //cout<<str<<endl;
                x=add(x,str);
                //cout<<x<<endl;
                ans+=f(v,str);
            }
        }
	}
	 return 0;
}
