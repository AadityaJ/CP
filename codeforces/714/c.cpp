#include <iostream>
#include <string>
#include <cmath>
#define MAX 10000000
using namespace std;
int G[MAX];
inline bool isEven(int x){return (x%2==0);}
int parseInt(long long int x){
    int a=x;
    int bin=0,m=0;
    while(a){
        int j=a%10;
        if(!isEven(j)) bin+=(pow(2,m));
        m++;
        a/=10;
    }
    //cout<<x<<" "<<bin<<endl;
    return bin;
}
int parseBin(long long int x){
    int a=x;
    int bin=0,m=0;
    while(a){
        int j=a%10;
        if(j==1) bin+=(pow(2,m));
        m++;
        a/=10;
    }
    //cout<<bin;
    return bin;
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        char str;
        long long int a;
        cin>>str>>a;
        switch(str){
            case '+':G[parseInt(a)]++;break;
            case '-':G[parseInt(a)]--;break;
            case '?':cout<<G[parseBin(a)]<<endl;break;
        }
    }
    return 0;
}
