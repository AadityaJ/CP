//https://www.codechef.com/DEC16/problems/KIRLAB
#include <iostream>
using namespace std;
int min(int a,int b){
    return (a>b)?b:a;
}
/*int gcd(int n1,int n2){
    while(n1 != n2){
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
        }
    return n1;
}
int gcd(int a, int b) {
    int t;
    if(a==b) return a;
    if(b==1) return 1;
    if(a%b==0) return b;
    if(a%2==0 && b%2==0) return 2;
    if(a%3==0 && b%3==0) return 3;
    while(b != 0){
        t = a;
        a = b;
        b = t%b;
    }
    return a;
}*/
/*bool checkCoprime(int a,int b){
    if(a==1 || b==1) return 0;
    if(a%b==0) return 1;
    if(b%a==0) return 1;
    for(int i=2;i<=min(a,b);i++){
        if(a%i==0 && b%i==0) {return 1;}
    }
    return 0;
}*/
int lis( int arr[], int n )
{
    int lis[n], i, j;
    int max = 0;
    for (i = 0; i < n; i++ )
        lis[i] = 1;
    for (i = 1; i < n; i++ )
        for (j = 0; j < i; j++ )
            if ( checkCoprime(arr[i],arr[j]) && lis[i] < lis[j] + 1){
                lis[i] = lis[j] + 1;
            }
    for (i = 0; i < n; i++ )
        if (max < lis[i])
            max = lis[i];

    return max;
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        cout<<lis(arr,n)<<endl;
    }
    return 0;
}
