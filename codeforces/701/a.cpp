#include <iostream>
#include <algorithm>
using namespace std;
bool touched[103];
int printSearch(int *arr,int n,int ele){
    int i;
    for(i=1;(i<=n && arr[i]!=ele) || touched[i]!=0;i++);
    touched[i]=1;
    return i;
}
int main(int argc, char const *argv[]) {
    int n,arr[103],temp[103];
    cin>>n;
    for(int i=1;i<=n;i++) {cin>>arr[i];temp[i]=arr[i];}
    sort(temp,temp+n+1);
    for(int i=1;i<=(n/2);i++){
        cout<<printSearch(arr,n,temp[i])<<" "<<printSearch(arr,n,temp[n-i+1])<<endl;
    }
    return 0;
}
