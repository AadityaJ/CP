#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        long long int x,y;
        cin>>x>>y;
        long long int area=(x*y);
        if(area%2) cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}
