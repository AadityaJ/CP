#include <iostream>
#include <limits>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            sum+=(a-b);
        }
        cout<<sum<<endl;
    }
    return 0;
}
