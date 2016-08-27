#include <iostream>
using namespace std;
int getSum(int a){
    int sum=0;
    while(a){
        sum+=(a%10);
        a/=10;
    }
    return sum;
}
int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    int cnt=0;
    for(int i=n-100;i<=n;i++){
        if(i>0){
            int j=getSum(i);
            int k=getSum(j);
            //cout<<i<<" "<<j<<" "<<k<<" "<<endl;
            if(i+j+k==n) {cnt++;}
        }
    }
    cout<<cnt<<endl;
    return 0;
}
