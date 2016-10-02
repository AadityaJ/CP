//http://codeforces.com/problemset/problem/34/D
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    int arr[n+1];
    int r1,r2;
    cin>>n>>r1>>r2;
    for(int i=1;i<=n;i++){
        if(i==r1) arr[i]=i;
        else cin>>arr[i];
    }
    arr[r1]=r2;
    arr[r2]=r2;
    for(int i=1;i<=n;i++){
        if(i==r2) continue;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
