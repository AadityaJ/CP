#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;
class CompareDist
{
public:
    bool operator()(pair<int,int> n1,pair<int,int> n2) {
        return n1.second<n2.second;
    }
};
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		priority_queue<pair<int,int>,vector<pair<int,int> >,CompareDist> pq;
		queue <pair<int,int> > q;
		//int prod[n];
		int x;
		for(int i=0;i<n;i++) {cin>>x;pq.push(make_pair(i+1,x));}
		//for(int i=0;i<n;i++) {cout<<pq.top().first<<" "<<pq.top().second<<" ";pq.pop();}
		std::vector<int> G[5000];
		for(int i=0;i<n-1;i++){
			int a,b;
			cin>>a>>b;
			G[b].push_back(a);
			G[a].push_back(b);
		}
		/*for(int i=1;i<=n;i++){
			cout<<endl<<i<<" : ";
			for(int j=0;j<G[i].size();j++){
				cout<<G[i][j]<<" ";
			}
		}*/
		for(int i=1;i<=n;i++){
			while(1){
				bool flg=1;
				for(int j=0;j<G[i].size();j++){
					if(pq.top().first==G[i][j]){flg=0;}
				}
				if(flg==1 &&pq.top().first==i)break;
				q.push(pq.top());
				pq.pop();
			}
			//cout<<q.size()<<" ";
			cout<<pq.top().first<<" ";
			for(int j=0;j<q.size();j++){
				pq.push(q.front());
				q.pop();
			}
		}
	}
	 return 0;
}
