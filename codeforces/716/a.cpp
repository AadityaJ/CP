#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    long long int n,c;
    cin>>n>>c;
    long long int arr[n],diff[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(long long int i=0;i<(n-1);i++){
        diff[i]=arr[i+1]-arr[i];
    }
    long long int j=1;
    for(long long int i=0;i<(n-1);i++){
        if(diff[i]<=c) j++;
        else j=1;
    }
    cout<<j;
    return 0;
}
