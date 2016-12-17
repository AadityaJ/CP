#include <iostream>
#include <algorithm>
#define MAX 100001
using namespace std;
int disc[4];
int findDisc(int *arr,int n){
    int x=0;
    for(int i=0;i<n;i++){
        if(x==4)break;
        if(x==0) disc[x++]=arr[i];
        bool found=0;
        for(int j=0;j<x;j++){
            if(arr[i]==disc[j]){found=1;break;}
        }
        if(found==0) disc[x++]=arr[i];
    }
    return x;
}
int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {cin>>arr[i];}
    int x=findDisc(arr,n);
    if(x==1 || x==2) cout<<"YES";
    else if(x==3) {
        sort(disc,disc+3);
        if((float)disc[1]==((float)(disc[0]+disc[2])/2)) cout<<"YES";
        else cout<<"NO";
    }
    else cout<<"NO";
    return 0;
}
