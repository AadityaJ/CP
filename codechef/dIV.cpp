#include <iostream>
#define MAX 1000000
using namespace std;

bool prime[MAX+1];
void createPrime(){
    for(int i=2;i<=MAX;i++) prime[i]=1;
    for (int p=2; p*p<=MAX; p++){
    if (prime[p] == true)
    {
        for (int i=p*2; i<=MAX; i += p)
            prime[i] = false;
        }
    }
    //cout<<prime[5]<<endl<<endl;
}
int getlpd(int a){
    int j=2;
    //for(j=2;prime[j]&& j<=a&& (a%j!=0);j++) ; // keep doing till u get here
    while(j<=a){
        if(prime[j]&&(a%j==0)) break;
        j++;
    }
    if(j>a) return 1;
    else if(!prime[j]) return a;
    else return j;
}
void update(int *prime_arr,int *arr,int l,int r){
    for(int i=l;i<=r;i++){
        arr[i]=arr[i]/prime_arr[i];
        prime_arr[i]=getlpd(arr[i]);
    }
}
int result(int *prime_arr,int l,int r){
    int result=1;
    for(int i=l;i<=r;i++){
        result=max(result,prime_arr[i]);
    }
    return result;
}
int main(int argc, char const *argv[]) {
    createPrime();
    //cout<<getlpd(15)<<endl;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int arr_least_prime[n];
        /* now create least prime array */
        for(int i=0;i<n;i++) arr_least_prime[i]=getlpd(arr[i]);
        /*creation done*/
        for(int i=0;i<m;i++){
            int op,l,r;
            cin>>op>>l>>r;
            if(op==0) update(arr_least_prime,arr,l-1,r-1);
            else cout<<result(arr_least_prime,l-1,r-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
