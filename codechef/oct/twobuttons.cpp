//http://codeforces.com/problemset/problem/520/B
#include <iostream>
#include <limits>
#define MAX 20001
using namespace std;
int num[MAX];
int dp(int n,int m){
    if(n<=0 || n>=MAX) return INT_MAX;
    if(n==m) return 0;
    if(num[n]) return num[n];
    return num[n]=(1+min(dp(n-1,m),dp(n*2,m)));
}
int main(int argc, char const *argv[]) {
    int n,m;
    cin>>n>>m;
    cout<<dp(n,m);

}
