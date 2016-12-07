//https://www.codechef.com/DEC16/problems/BASE
#include <math.h>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        for(int i=2;i<=n;i++){
            int j=pow(i,(log(n)/log(i)));
            cout<<j<<endl;
            if(j<=n && n<(2*j)) count++;
        }
        std::cout << count << std::endl;
    }
    return 0;
}
