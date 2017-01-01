//http://codeforces.com/problemset/problem/520/B
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#define MAX 10005
using namespace std;
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	int no_clicks=0;
	if(n>=m){
		cout<<(n-m)<<endl;
		return 0;
	}
	while(n<m){
		if(!m%2) m/=2;
		else m+=1;
		no_clicks++;
	}
	cout<<no_clicks+n-m<<endl;
	return 0;
}
/*int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	std::vector<int> d(MAX,-1);
	queue <int> q;
	d[n]=0;
	q.push(n);
	while(!q.empty()){
		int top=q.front();
		q.pop();
		if(top==m){
			cout<<d[top]<<endl;
			return 0;
		}
		if(top*2 <=MAX){
			if(d[2*top]==-1){
				d[2*top]=d[top]+1;
				q.push(2*top);
			}
		}
		if(top>1 && d[top-1]==-1){
			d[top-1]=d[top]+1;
			q.push(top-1);
		}
	}
	return 0;
}*/
