#include <string>
#include <iostream>
#include <map>
using namespace std;
std::map<char, int> touched,touched2,last;
int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    string str;
    cin>>str;
    int strt=n,unique=0;
    for(int i=str.length()-1;i>=0;i++){
        if(!touched[str[i]]){
            last[str[i]]=i;
            touched[str[i]]=1;
            strt=i;
            unique++;
        }
    }
    int ans=0;
    for(int i=strt;i<=str.length();i++){
        ans++;
        if(touched2[i]==0) unique--;
        if(unique==0) break;
    }
    cout<<ans;
    return 0;
}
