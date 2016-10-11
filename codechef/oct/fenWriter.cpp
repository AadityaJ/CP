#include <iostream>
#include <string>
using namespace std;
long long int findVal(string str){
    int val=0;
    for(int i=0;i<str.length();i++){
        val<<=1;
        val+=(str[i]-'0');
    }
    return val;
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        string l1,l2,l3;
        int n;
        //cout<<findVal("1001");
        cin>>l1>>l2>>l3>>n;
        string num="";
        num+=l1;
        for(int i=0;i<n;i++)num+=l2;
        num+=l3;
        //cout<<findVal(num)<<endl;
        long long int val=findVal(num);
        int count=0;
        while(val>1){
            count++;
            val=val&(val+1);
            val--;
        }
        cout<<count<<endl;
    }
    return 0;
}
