#include <iostream>
#include <vector>
#define MAX 100001
using namespace std;

class Graph{
public:
    std::vector<int> v[MAX];
    int node;
    bool isCyclic(int node);
    int countCycles();
    void addEdge(int a,int b){v[x].push_back(y);}
};

int Graph::countCycles(){
    bool visited[n],resstack[n];
    for(int i=1;i<=node;i++){visited[i]=0;resstack[i]=0;}
    int count=0;
    for(int i=1;i<=n;i++){
        count+=isCyclic(i);
    }
    return count;
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        Graph g;
        int n;
        cin>>n;
        g.node=n;
        int val;
        for(int i=1;i<=n;i++) {cin>>val; g.addEdge(i,((i+val+1)%n));}
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
        cout<<count<<endl;
    }
    return 0;
}
