//http://codeforces.com/problemset/problem/520/B
#include <iostream>
#include <vector>
#include <queue>
#define MAX 20001
using namespace std;
std::vector<int> g[MAX];
bool visited[MAX];
void createGr(int a){
    if(a<0 || a>MAX) return ;
    cout<<a<<"\t";
    g[a].push_back(a+1);
    g[a].push_back(a*2);
    createGr(a+1);
    createGr(a+1);
}
int bfs(int a,int m){
    visited[a]=1;
    int count=0;
    queue <int> q;
    q.push(a);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        visited[x]=1;
        if(x==m) return count;
        count++;
        for(int j=0;j<g[x].size();j++){
            int item=g[x][j];
            if(!visited[item]){
                q.push(item);
            }
        }
    }
}
int main(int argc, char const *argv[]) {
    createGr(1);
    int n,m;
    //cin>>n>>m;
    //cout<<bfs(n,m);

}
