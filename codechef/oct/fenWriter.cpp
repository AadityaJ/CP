#include <iostream>
#include <string>
using namespace std;
long long int numones(string str){
    long long int num=0;
    for(long long int i=0;i<str.length();i++){
        if(str[i]=='1') num++;
    }
    return num;
}
long long int trailones(string str){
    long long int num=0;
    for(long long int i=str.length()-1;i>=0;i--){
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
        cin>>l1>>l2>>l3>>n;
        string num;
        num.append(l1);
        for(int i=0;i<n;i++) num.append(l2);
        num.append(l3);
        long long int count=(numones(num)+1);
        count-=trailones(num);
        cout<<count<<endl;
    }
    return 0;
}