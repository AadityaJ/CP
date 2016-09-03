// this will certainly not work
#include <iostream>
#include <vector>
#define MAX 1000000
using namespace std;
std::vector<bool> prime(1);
void createPrime(){
    for (int p=2; p*p<=MAX; p++){
    if (prime[p] == true)
    {
        for (int i=p*2; i<=MAX; i += p)
            prime[i] = false;
        }
    }
}
int main(int argc, char const *argv[]) {
    createPrime();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n],prime_arr[n];
        // create Prime arr
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++){
            int j=2;
            for(j=2;prime[j]&& j<=arr[i] && (arr[i]%j!=0);j++) ; // keep doing till u get here
            if(prime[j]>arr[i]) prime_arr[i]=1;
            else prime_arr[i]=j;
        }
        for(int i=0;i<n;i++) cout<<prime_arr[i]<<"  ";
        cout<<endl;
    }
    return 0;
}
