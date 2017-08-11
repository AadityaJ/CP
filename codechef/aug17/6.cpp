#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void printArr(vector<string> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
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
    for(int i=0;i<(n-c-1);i++) str.push_back('0');
    str.push_back('1');
    for(int i=0;i<c;i++) str.push_back('0');

    return str;
}
string add(string a,string b){
    int ca=0;
    string c="";
    for(int i=a.length()-1;i>=0;i--){
        int ax=a[i]-'0';
        int bx=b[i]-'0';
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
                x=add(x,str);
                ans+=f(v,x);
                //cout<<i<<" "<<x<<endl;
                //printArr(v);
                //cout<<endl;
            }
        }
	}
	 return 0;
}
