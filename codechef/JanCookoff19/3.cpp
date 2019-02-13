#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n];
        int b[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>b[i][j];
            }
        }
        bool isTrans = 1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]!=b[j][i]){isTrans=0;cout<<i<<" "<<j<<endl;break;}
            }
        }
        cout<<isTrans<<endl;
    }
    return 0;
}
