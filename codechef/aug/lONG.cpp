#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int num1=0,num0=0;
        /*char ch='';
        while(ch!='\n'){
            cin>>ch;
            if(ch=='0') num0++;
            else num1++;
        }*/
        for(int i=0;i<str.length();i++){
            if(str[i]=='1')num1++;
            else num0++;
        }
        //cout<<num0<<" "<<num1<<endl;
        if(num0==1 || num1==1) cout<<"Yes\n";
        else cout<<"No\n";

    }
    return 0;
}
