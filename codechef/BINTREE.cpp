#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n1,n2;
        cin>>n1>>n2;
        int cnt=0;
        int i=n1,j=n2;
        while(i!=j){
            if(i>j) i=i>>1;
            else j=j>>1;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
