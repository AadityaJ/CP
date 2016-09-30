#include <string>
#include <map>
#include <iostream>
using namespace std;
bool check(string s1,string s2){
    //std::map<string,int> map;
    char map[26]={0};
    for(int i=0;i<s1.length();i++) map[s1[i]-'A']=1;
    for(int i=0;i<s2.length();i++) map[s2[i]-'A']=1;
    for(int i=0;i<26;i++){
        if(map[i]!=1)return 0;
    }
    return 1;
}
int main(int argc, char const *argv[]) {
    int n1,n2;
    cin>>n1>>n2;
    string s_n1[10001];
    string s_n2[10001];
    for(int i=0;i<n1;i++) cin>>s_n1[i];
    for(int i=0;i<n2;i++) cin>>s_n2[i];
    int count=0;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(check(s_n1[i],s_n2[j])) count++;
        }
    }
    cout<<count;
    return 0;
}
