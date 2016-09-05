// this will certainly not work
#include <iostream>
#include <vector>
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
    //cout<<prime[2]<<endl<<endl;
    //cout<<prime[5]<<endl<<endl;
}
int getlpd(int a){
    int j;
    for(j=2;prime[j]&& j<=a&& (a%j!=0);j++) ; // keep doing till u get here
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
/************************* for subtask 2**********************************/
void update_2(int *arr,int l,int r){
    for(int i=l;i<=r;i++){
        arr[i]=1;
    }
}
int result_2(int *arr,int l,int r){
    int result=1;
    for(int i=l;i<=r;i++){
        result=max(result,arr[i]);
    }
    return result;
}
void gt_2(int n,int m){
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    /*for(int i=0;i<n;i++){
        prime_arr[i]=arr[i];
    }*/
    int op,l,r;
    for(int i=0;i<m;i++){
        cin>>op>>l>>r;
        if(op==0) update_2(arr,l-1,r-1);
        else cout<<result_2(arr,l-1,r-1)<<" ";
    }
    cout<<endl;
}
/************************done for subtask 2*********************************/
int main(int argc, char const *argv[]) {
    createPrime();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n>1000 || m>1000) {gt_2(n,m);}
        else {
            int arr[n],prime_arr[n];
            // create Prime arr
            for(int i=0;i<n;i++) cin>>arr[i];
            for(int i=0;i<n;i++){
                int j;
                /*for(j=2;prime[j]&& j<=arr[i] && (arr[i]%j!=0);j++) ; // keep doing till u get here
                //cout<<arr[i]%j<<endl;
                //cout<<arr[i]<<" "<<j<<endl;
                if(j>arr[i]) prime_arr[i]=1;
                else if(!prime[j]) prime_arr[i]=arr[i];
                else prime_arr[i]=j;*/
                prime_arr[i]=getlpd(arr[i]);
            //    cout<<arr[i]<<" "<<prime_arr[i]<<endl;
            }
            int op,l,r;
            //for(int i=0;i<n;i++) cout<<prime_arr[i]<<"  ";
            //cout<<endl;
            for(int i=0;i<m;i++){
                cin>>op>>l>>r;
                //for(int i=0;i<n;i++) cout<<prime_arr[i]<<" ";
                //cout<<endl<<l<<" "<<r<<endl;
                if(op==0) update(prime_arr,arr,l-1,r-1);
                else cout<<result(prime_arr,l-1,r-1)<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
