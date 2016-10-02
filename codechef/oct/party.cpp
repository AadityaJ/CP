//http://codeforces.com/problemset/problem/23/B
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1) cout<<"0"<<endl;
        else cout<<n-2<<endl;
    }
    return 0;
}
