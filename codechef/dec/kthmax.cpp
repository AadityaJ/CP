//https://www.codechef.com/DEC16/problems/KTHMAX
#include <iostream>
#include <utility>
#include <algorithm>
#define MAX 100001
using namespace std;
pair<int,int> p[MAX];
bool myComp(int a,int b){
    return a>b;
}
void init(int n){
    int x=1,y=n;
    for(int j=1;j<=n;j++){
        p[j]=make_pair(x,y);
        x=y+1;
        y=x+(n-j)-1;
    }
//    for(int j=1;j<=n;j++){
//        cout<<p[j].first<<" "<<p[j].second<<endl;
//    }
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        init(n);
        int arr[n+1];
        for(int i=0;i<n;i++) cin>>arr[i+1];
        sort(arr+1,arr+n+1,myComp);
        //for(int i=0;i<n;i++) cout<<arr[i+1]<<" ";
        for(int i=0;i<m;i++){
            int x,ans;
            cin>>x;
            for(int j=1;j<=n;j++){
                if(p[j].first<=x && p[j].second>=x){
                    ans=j;
                    break;
                }
            }
            cout<<arr[ans]<<endl;
        }
//        cout<<endl;
    }
    return 0;
}
/*
1) Math(Algo) unclicked.Couldnt find successful pattern.  (Math and Algo Issue)
*/
