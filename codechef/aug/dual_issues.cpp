#include <iostream>
#include <algorithm>
using namespace std;
bool isPrime(int a){
    if(a==1) return 0;
    for(int i=2;i<a;i++){if(a%i==0) return 0;}
    return 1;
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        int x=-1;
        for(int i=n-1;i>=0;i--){
            if(isPrime(arr[i])){x=arr[i];break;}
        }
        if(x==-1){cout<<x<<endl;}
        else cout<<(x*x)<<endl;
    }
    return 0;
}
