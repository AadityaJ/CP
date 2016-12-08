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
        if(n==0){cout<<"0"<<endl;continue;}
        if(n==1){cout<<"INFINITY\n";continue;}
        int count=1;
        //cout<<"\n\nFOR NUMBER  :: "<<n<<endl;
        for(int i=2;i<n;i++){
            int j=pow(i,(int)(log(n)/log(i)));
            //cout<<"BASE ::"<<i<<" "<<j<<endl;
            if(j<=n && n<(2*j)) count++;
        }
        std::cout << count << std::endl;
    }
    return 0;
}
