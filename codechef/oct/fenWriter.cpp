#include <iostream>
#include <string>
using namespace std;
int numones(string str){
    int num=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='1') num++;
    }
    return num;
}
int trailones(string str){
    int num=0;
    for(int i=str.length()-1;i>=0;i--){
        if(str[i]=='1'){num++;}
        else return num;
    }
    return num;
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        string l1,l2,l3;
        int n;
        //cout<<findVal("001");
        cin>>l1>>l2>>l3>>n;
        string num="";
        num+=l1;
        for(int i=0;i<n;i++)num+=l2;
        num+=l3;
        //cout<<trailones("000100011");
        //cout<<findVal(num)<<endl;
        //long long int val=findVal(num);
        int count=(numones(num)+1);
        count-=trailones(num);
        cout<<count<<endl;
    }
    return 0;
}
