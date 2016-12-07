//https://www.codechef.com/DEC16/problems/ANKTRAIN
#include <iostream>
#include <string>
using namespace std;
int map[8]={4,5,6,1,2,3,8,7};
string getType(int a){
    a=(a%8);
    a++;
    //cout<<a<<endl;
    switch(a){
        case 1: return "LB";
        case 4: return "LB";
        case 7: return "SL";
        case 8: return "SU";
        case 2: return "MB";
        case 5: return "MB";
        case 3: return "UB";
        case 6: return "UB";
    }
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=(n%8)+1;
        int y=(n/8);
        int x1=map[x-1];
        int re=x1*y;
        string result=getType(x)+to_string(re);
        cout<<result<<endl;
    }
    return 0;
}
