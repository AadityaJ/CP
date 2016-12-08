//https://www.codechef.com/DEC16/problems/BASE
#include <cmath>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        double n;
        cin>>n;
        if(n==0){cout<<"0"<<endl;continue;}
        if(n==1){cout<<"INFINITY\n";continue;}
        double count=1;
        //cout<<"\n\nFOR NUMBER  :: "<<n<<endl;
        cout<<log2(1024)<<endl;
        for(int i=3;i<=n;i++){
            //double j=pow(i,(int)((int)log(n)/(int)log(i)));
            int j=pow(i,(int)((log2(n))/log2(i)));
            //cout<<"BASE ::"<<i<<" "<<j<<endl;
            if(j<=n && n<(2*j)) count++;
        }
        std::cout << count << std::endl;
    }
    return 0;
}
