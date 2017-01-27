#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b;
	int n,m;
	scanf("%d %d",&n,&m);
	list <int> vec[(n+1)];
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		int x;
		for(int j=0;j<b;j++){
			scanf("%d",&x);
			vec[x].push_back(a);
		}
	}
	// now calculate in degrees
	vector <int> indeg((n+1),0);
	for(int i=0;i<=n;i++){
		list <int>::iterator itr;
		for(itr=vec[i].begin();itr!=vec[i].end();itr++)
			++indeg[*itr];
	}
	//for(int i=0;i<=n;i++) printf("%d %d\n",i,indeg[i]);
	queue <int> q;
	for(int i=0;i<=n;i++){
		if(indeg[i]==0) q.push(i);
	}
	int cnt=0;
	vector <int> top_order;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		top_order.push_back(u);
		list <int>::iterator itr;
		for(itr=vec[u].begin();itr!=vec[u].end();itr++){
			if(--indeg[*itr]==0) q.push(*itr);
		}
		cnt++;
	}
	//printf("%d %d\n",cnt,n);
	if(cnt<n) printf("Sandro fails.");
	else {
		for(int i=1;i<top_order.size();i++)
			printf("%d ",top_order[i]);
	}
	return 0;
}
