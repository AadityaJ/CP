#include <iostream>
#define max 115   // i am not a stud
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr1[max],arr2[max];
        for(int i=0;i<max;i++){arr1[i]=0;arr2[i]=0;}
        int temp1,temp2;
        for(int i=0;i<n;i++){
            cin>>temp1>>temp2;
            arr1[temp2]+=temp1;
        }
        for(int i=0;i<m;i++){
            cin>>temp1>>temp2;
            arr2[temp2]+=temp1;
        }
        int diff=0;
        for(int i=0;i<max;i++){
            diff+=(arr1[i]>arr2[i])?0:(arr2[i]-arr1[i]);
        }
        cout<<diff<<endl;
    }
    return 0;
}
