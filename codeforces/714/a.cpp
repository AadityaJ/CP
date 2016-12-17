#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    long long int l1,l2,r1,r2,k;
    cin>>l1>>r1>>l2>>r2>>k;
    long long int l,r;
    l=max(l1,l2);
    r=min(r1,r2);
    if(l>r) cout<<"0";
    else if(l<=k && k<=r) cout<<(r-l);
    else cout<<(r-l+1);
    return 0;
}
