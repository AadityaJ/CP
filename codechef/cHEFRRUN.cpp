#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int count=0;
        for(int i=0;i<n;i++){
            int j=i;
            int cnt=0;
            while(1){
                j=(j+arr[j])%n;
                
            }
        }
    }
    return 0;
}
