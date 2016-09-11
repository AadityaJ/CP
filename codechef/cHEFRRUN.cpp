#include <iostream>
#include <vector>
#define MAX 100001
using namespace std;

class Graph{
public:
    std::vector<int> v[MAX];
    int n;
    bool isCyclic(int node,bool *,bool *);
    int countCycles();
    void addEdge(int x,int y){v[x].push_back(y);}
    void printGraph();
};
void Graph::printGraph(){
    for(int i=1;i<=n;i++){
        cout<<endl<<i<<" :: ";
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
    }
}
bool Graph::isCyclic(int node,bool *visited,bool *resstack){
    if(visited[node]==false){
        resstack[node]=1;
        visited[node]=1;
        for(int i=0;i<v[node].size();i++){
            if(!visited[v[node][i]] && isCyclic(v[node][i],visited,resstack))
                return 1;
            else if(resstack[v[node][i]]) return 1;
        }
    }
    resstack[node]=0;
    return 0;
}
int Graph::countCycles(){
    bool visited[n+1],resstack[n+1];
    for(int i=1;i<=n;i++){visited[i]=0;resstack[i]=0;}
    int count=0;
    for(int i=1;i<=n;i++){
        count+=isCyclic(i,visited,resstack);
        cout<<i<<" "<<count<<" ";
    }
    return count;
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        Graph g;
        int no;
        cin>>no;
        g.n=no;
        int val;
        for(int i=1;i<=no;i++) {cin>>val;int x=(i+val+1)%(no);if(x==0){x=no;} g.addEdge(i,x);}
        g.printGraph();cout<<endl;
        int count=0;
        /*for(int i=0;i<n;i++){
            int j=i;
            int cnt=0;
            while(cnt<=n){
                j=(j+arr[j]+1)%n;
                if(j==i) {count++;break;}
                cnt++;
            }

        }*/
        count=g.countCycles();
        cout<<endl<<count<<endl;
    }
    return 0;
}
