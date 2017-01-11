#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int prod[n];
        int arr[n][n];
        int res[n][n];
        for(int i=0;i<n;i++) cin>>prod[i];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) arr[i][j]=1;
            arr[i][i]=0;
        }
        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            arr[x-1][y-1]=arr[y-1][x-1]=0;
        }
        for(int i=0;i<n;i++){
            int mx=0,index;
            for(int j=0;j<n;j++){
                if(arr[i][j]==0) res[i][j]=0;
                else res[i][j]=prod[j];
                if(mx<res[i][j]){mx=res[i][j];index=j;}
            }
            cout<<index+1<<" ";
        }
    }

}
