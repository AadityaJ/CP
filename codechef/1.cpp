#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    for(int index=1;index<=t;index++){
        int l,r;
        cin>>l>>r;
        int mn=(l<r)?l:r;
        int an=(2*mn)-1;
        if(an<0)an=0;
        cout<<"Case #"<<index<<": "<<an<<endl;
    }
    return 0;
}
