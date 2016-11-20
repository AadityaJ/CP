//https://www.codechef.com/problems/CPERM
#include <iostream>
#define MOD 1000000007
using namespace std;
long power2(int N){
    if(N==0){
        return 1;
    } else if(N%2==0){
        int H=power2(N/2);
        return H*H%MOD;
    } else {
        int H=power2((N-1)/2);
        return H*H*2%MOD;
    }
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){cout<<"0"<<endl;continue;}
        //cout<<pow2(2)<<pow2(4)<<(6%5);
        cout<<(power2(n-1))-2<<endl;
    }
    return 0;
}
