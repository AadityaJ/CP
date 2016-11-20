//https://www.codechef.com/problems/CPERM
#include <iostream>
#define MOD 1000000007
using namespace std;
long pow2(int x){
    long prod=1;
    for(int i=0;i<x;i++){
        prod*=2;
        prod=prod%MOD;
    }
    prod=prod%MOD;
    return prod;
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //cout<<pow2(2)<<pow2(4)<<(6%5);
        
    }
    return 0;
}
