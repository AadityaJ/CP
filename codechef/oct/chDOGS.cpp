#include <iostream>
#include <iomanip>
#define vlow 1e-6
//2s/3v
//error was to set precision to certain value :)
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        long s,v;
        double res;
        cin>>s>>v;
        res=((2.00*s)/(3.00*v));
        cout<<fixed<<setprecision(7);
        if(res<=vlow){res=0.0000001;cout<<res<<endl;}
        else {cout<<res<<endl;}
    }
    return 0;
}
