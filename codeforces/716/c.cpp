#include <iostream>
using namespace std;
int calc(int x,int init){
    return (x*x)-init;
}
int main(int argc, char const *argv[]) {
    int n;
    int init=2,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        //cout<<"level "<<i<<"to "<<i+1<<" ";
        //for(int j=1;;j++){
            x=((i+1)*i);
            int val=calc(x,init);
            cout<<(val/i)<<endl;
    }
    return 0;
}
