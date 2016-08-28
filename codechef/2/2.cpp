#include <iostream>
using namespace std;
unsigned long long combinations(unsigned k, unsigned n) {
    unsigned long long counts[k] = {0};
    unsigned i;
    for(i = 0; i < n; ++i) {
        ++counts[i%k];
    }
    // number of pairs where both are divisible by k
    unsigned long long combs = counts[0]*(counts[0]-1)/2;
    for(i = 1; i < (k+1)/2; ++i) {
        combs += counts[i]*counts[k-i];
    }
    if (k == 2*i) {
        combs += counts[i]*(counts[i] - 1)/2;
    }
    return combs;
}
int main(int argc, char const *argv[]) {
    cin>>t;
    for(int index=1;index<=t;index++){
        unsigned int a,b,n,k;
        cin>>a>>b>>n>>k;
        
        cout<<"Case #"<<index<<": "<<an<<endl;
    }
    return 0;
    return 0;
}
