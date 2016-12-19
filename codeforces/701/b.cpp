#include <iostream>
#define MAX 100004
using namespace std;
bool row[MAX],col[MAX];
int main(int argc, char const *argv[]) {
    long long n,m,x,y,r,c;
    cin>>n>>m;
    r=n;
    c=n;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        if(!row[x]){
            row[x]=1;
            r--;
        }
        if(!col[y]){
            col[y]=1;
            c--;
        }
        cout<<(r*c)<<" ";
    }
    return 0;
}
