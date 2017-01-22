#include <bits/stdc++.h>
using namespace std;
 int mat[100+3][107];
 int lone[100+4][105+3];
int main()
{
    memset(lone,0,sizeof lone);
        int n,m;scanf("%d",&n);
        m=n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j)scanf("%d",&mat[i][j]);//cin>>mat[i][j];
    }
    for(int j=1;j<=m;++j){
        int tmp=0;
        for(int i=1;i<=n;++i){
            lone[i][j]^=mat[i][j];
            lone[i][j]^=lone[i-1][j];
        }
    }
    int ans=0;
    for(int a=1;a<=n;++a){
        for(int b=a;b<=n;++b){
            for(int c=1;c<=m;++c){
                int tmp=0;
                for(int d=c;d<=m;++d){
                       tmp^=(lone[b][d]^lone[a-1][d]);
                        ans=max(ans,tmp);
                }
            }
        }
    }
   printf("%d\n",ans);// cout<<ans<<"\n";
    return 0;
}
