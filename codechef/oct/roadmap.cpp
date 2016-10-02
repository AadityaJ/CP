//http://codeforces.com/problemset/problem/34/D
//ok this required dfs my mistake
#include <iostream>
#include <vector>
#define MAX 50010
using namespace std;
int ans[MAX];
bool visited[MAX];
std::vector<int> g[MAX];
void dfs(int node){
    visited[node]=1;
    for(int i=0;i<g[node].size();i++){
        int v=g[node][i];
        if(!visited[v]){
            ans[v]=node;
            visited[v]=1;
            dfs(v);
        }
    }
}
int main(int argc, char const *argv[]) {
    int n;
    int arr[n+1];
    int r1,r2;
    cin>>n>>r1>>r2;
    for(int i=1;i<=n;i++){
        if(i==r1) continue;
        int temp;
        cin>>temp;
        g[temp].push_back(i);
        g[i].push_back(temp);
    }
    dfs(r2);
    for(int i=1;i<=n;i++){
        if(i==r2) continue;
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
