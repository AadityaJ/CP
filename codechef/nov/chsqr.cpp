//https://www.codechef.com/problems/CHSQR
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i <n;i++){
            for(int j=0; j<n;j++){
                cout<< ((n+1)/2 + i + j) % n + 1<< " ";
            }
            cout<< endl;
        }
    }
    return 0;
}
