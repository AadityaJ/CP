#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>
using namespace std;
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	int degree[n+1],xorsum[n+1];
	queue <int> q;
	for(int i=0;i<n;i++){
		cin>>degree[i]>>xorsum[i];
		if(degree[i]==1){
			q.push(i);
		}
	}
	std::vector< pair<int,int> > v;
	while(!q.empty()){
		int fr=q.front();
		q.pop();
		if(degree[fr]==0) continue;
		int to=xorsum[fr];
		v.push_back(make_pair(fr,to));
		xorsum[to]^=fr;
		degree[fr]--;
		degree[to]--;
		if(degree[to]==1){
			q.push(to);
		}
	}
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		pair<int,int> p=v[i];
		cout<<p.first<<" "<<p.second<<endl;
	}
	return 0;
}
