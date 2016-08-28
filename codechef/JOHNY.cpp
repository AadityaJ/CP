#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        cout<<50000*50000<<endl;
        int n,x;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        cin>>x;
        int ele=arr[x-1];
        // find out nos smaller than ele
        int cnt=0;
        for(int i=0;i<n;i++){
            if(ele>arr[i]) cnt++;
        }
        cout<<cnt+1<<"\n";
    }
    return 0;
}
