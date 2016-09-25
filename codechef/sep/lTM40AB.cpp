//LTM40AB
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long int count=0;
        int i;
        for(i=a;i<=b;i++){
            if(i>c) break;
            count+=(d-i);
        }
        // if overflow i.e b>d
        for(;i<=b;i++){
            int j=d-i;
            if(j>0) count+=(d-i);
            else break;

        }
        cout<<count<<endl;
    }
    return 0;
}
