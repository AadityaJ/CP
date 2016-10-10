#include <iostream>
#include <utility>
#include <cmath>
#define MAX 1000000
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int a,b,val,cnt=0;
        cin>>a>>b>>val;
        pair<int,int> p[MAX];
        int index=0;
        for(int i=1;i<=(val);i++){
            if((val%i)==0){p[index++]=make_pair(i,(val/i));}
        }
        //for(int i=1;i<index;i++){cout<<p[i].first<<"\t"<<p[i].second<<"\n";}
        //cout<<endl;
        //now check if p[i].first < x || p[i].second < y
        for(int i=0;i<index;i++){
            if(p[i].first<=a && p[i].second<=b) cnt++;
        //    if(p[i].first<=b && p[i].second<=a) cnt++;
        }

        cout<<cnt<<endl;
    }
    return 0;
}
