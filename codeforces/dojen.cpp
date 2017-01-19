#include <iostream>
#include <string>
using namespace std;
bool allones(string str){
    bool flg=1;
    for(int i=0;i<str.length();i++){
        if(str[i]=='0'){flg=0;break;}
    }
    return flg;
}
int main(int argc, char const *argv[]) {
    int n,m;
    cin>>m>>n;
    int mx=0;
    int count=0;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        //cout<<allones(str)<<endl;
        if(!allones(str)){count++;}
        else count=0;
        if(count>mx)mx=count;
    }
    cout<<mx;
    return 0;
}
