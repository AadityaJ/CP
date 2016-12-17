#include <iostream>
#include <string>
#define MAX 3002
using namespace std;
int arr[MAX][MAX];
int main(int argc, char const *argv[]) {
    int t;
    string str;
    cin>>str>>t;
    for(int x=0;x<t;x++){
        string st;
        cin>>st;
        for(int i=0;i<st.length();i++){
            if(str[i]=='*') continue;
            if(str[i]!=st[i]) arr[x][i]++;
        }
    }
    int sum[str.length()];
    for(int i=0;i<str.length();i++){
        sum[i]=0;
        for(int j=0;j<t;j++) sum[i]+=arr[j][i];
    }
    int mx=0,index=0;
    for(int i=0;i<str.length();i++){
        if(mx<sum[i]){mx=sum[i];index=i;}
    }
    cout<<mx;
    return 0;
}
