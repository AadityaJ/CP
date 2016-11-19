//https://www.codechef.com/problems/ALEXTASK
#include <iostream>
#include <limits.h>
using namespace std;
long long gcd(long a, long b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}
long long lcm(long a, long b)
{
    long long temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}
int main(int argc, char const *argv[]) {
    long t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long arr[n];
        for(long i=0;i<n;i++) cin>>arr[i];
        long long res=1e18;
        for(long i=0;i<n;i++){
            for(long j=i+1;j<n;j++){
                //long val=lcm(arr[i],arr[j]);
                //cout<<arr[i]<<" "<<arr[j]<<" "<<val<<endl;
                //if(val<min){min=val;}
                res=min(res,lcm(arr[i],arr[j]));
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
