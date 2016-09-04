#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        bool map[n][n];
        long long f[1<<n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) map[i][j]=0;
        }
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            x--;y--;
            if (x>y)
                swap(x,y);
            map[x][y]=map[y][x]=1;
            f[(1<<x)+(1<<y)][y]=1;
        }
        int res=0,k;
        for(int i=7;i<(1<<n);i++){
            int F=1;
            for(int j=0;j<n;j++)
                if(i&(1<<j) && f[i][j]==0)
                {
                    if(F)
                    {
                        F=0;
                        k=j;
                        continue;
                    }
                    for(int l=k+1;l<n;l++)
                    {
                        if(i&(1<<l) && map[j][l])
                        f[i][j]+=f[i-(1<<j)][l];
                    }
                    if(map[k][j])
                    res+=f[i][j];
                }
        }
        cout<<(res/2)<<endl;

    }
    return 0;
}
