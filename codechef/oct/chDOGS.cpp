#include <iostream>
//2s/3v
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        long s,v;
        double res;
        cin>>s>>v;
        res=((2.00*s)/(3.00*v));
        cout<<res<<endl;
    }
    return 0;
}
