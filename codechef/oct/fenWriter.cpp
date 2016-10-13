#include <iostream>
#include <string>
using namespace std;
long long int numones(string str){
    long long int num=0;
    for(long long int i=0;i<str.length();i++){
        if(str[i]=='1') num++;
    }
    return num;
}
long long int trailones(string str){
    long long int num=0;
    for(long long int i=str.length()-1;i>=0;i--){
        if(str[i]=='1'){num++;}
        else return num;
    }
    return num;
}
long long int actualtrail(string l1,string l2,string l3,int n){
    int x_l1=trailones(l1);
    int x_l2=trailones(l2);
    int x_l3=trailones(l3);
    if(x_l3!=l3.length()) return x_l3;

    if(x_l2!=l2.length()) return x_l3+x_l2;

    return x_l3+(n*x_l2)+x_l1;

}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        string l1,l2,l3;
        int n;
        cin>>l1>>l2>>l3>>n;
        //string num;
        //num.append(l1);
        //for(int i=0;i<n;i++) num.append(l2);
        //num.append(l3);
        //long long int count=(numones(num)+1);
        long long int count=(numones(l1));
        count+=(numones(l3));
        count+=(numones(l2)*n);
        count++;
        count-=actualtrail(l1,l2,l3,n);
        cout<<count<<endl;
    }
    return 0;
}
