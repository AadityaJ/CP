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
        for(int i=0;i<str.length();i++){
            if(str[i])num1++;
            else num0++;
        }
        if((num0-num1)==1 || (num1-num0)==1) cout<<"Yes\n";
        else cout<<"No\n";

    }
    return 0;
}
