#include <iostream>
#include <string>
using namespace std;
long long int con2base(int a,int x){
    long long int str=0;
    while(a){
        str+=((a%x));
        str*=10;
        a/=x;
    }
    return str;
}
int main(int argc, char const *argv[]) {
    for(int i=2;i<30;i++){
        cout<<con2base(30,i)<<" ";
    }
    return 0;
}
