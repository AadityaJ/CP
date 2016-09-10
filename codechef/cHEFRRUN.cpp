#include <iostream>
#include <vector>
#define MAX 100001
using namespace std;

class Graph{
    std::vector<int> v[MAX];
public:
    bool isCyclic(int node);
    int countCycles();
    void addEdge(int a,int b){v[x].push_back(y);}
};
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        Graph g;
        int n;
        cin>>n;
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
