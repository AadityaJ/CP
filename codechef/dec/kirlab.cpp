//https://www.codechef.com/DEC16/problems/KIRLAB
#include <iostream>
using namespace std;
int gcd(int n1,int n2){
    while(n1 != n2){
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
        }
    return n1;
}
int lis( int arr[], int n )
{
    int lis[n], i, j, max = 0;

    /* Initialize LIS values for all indexes */
    for (i = 0; i < n; i++ )
        lis[i] = 1;

    /* Compute optimized LIS values in bottom up manner */
    for (i = 1; i < n; i++ )
        for (j = 0; j < i; j++ )
            if ( gcd(arr[i],arr[j])>1 && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;

    /* Pick maximum of all LIS values */
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
