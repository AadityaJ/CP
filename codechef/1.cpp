#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    for(int index=1;index<=t;index++){
        int l,r;
        cin>>l>>r;
        int mn=(l<r)?l:r;
        long long int an=(mn*mn)-((mn)*(mn-1))/2;
        cout<<"Case #"<<index<<": "<<an<<endl;
    }
    return 0;
}
