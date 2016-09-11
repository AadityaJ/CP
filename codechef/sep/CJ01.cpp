#include <map>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        long long int val;
        long long int arr[1000000];
        bool b[1000000]={false};;
        for(int i=0;i<n;i++){cin>>arr[i];if(arr[i]<1000000) b[arr[i]]=1;}
        for(int i=0;i<q;i++){
            cin>>val;
            //if(mp[val]==0){cout<<"NO\n";mp[val]=1;}
            //else cout<<"YES\n";
            if(val<1000000){
                if(b[val]) cout<<"YES\n";
                else{cout<<"NO\n";b[val]=1;}
            }
            else{
                bool flg=0;
                for(int i=0;i<n;i++){
                    if(arr[i]==val){flg=1;break;}
                }
                if(flg){cout<<"YES\n";}
                else {cout<<"NO\n";arr[n]=val;n++;}
            }
        }
    }
    return 0;
}
