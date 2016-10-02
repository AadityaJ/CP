//http://codeforces.com/problemset/problem/520/B
#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
    int n,m;
    cin>>n>>m;
    int x;
    if(n==m) {cout<<"0"<<endl;return 0;}
    if(m %(2*n)==0 || m<=n){x=(m/(2*n));}
    else {x=(m/(2*n))+1;}
    cout<<(x)+(2*n*x)-m<<endl;
    return 0;
}
