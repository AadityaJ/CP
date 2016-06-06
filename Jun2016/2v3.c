//https://www.hackerearth.com/code-monk-segment-tree-and-lazy-propagation/algorithm/2-vs-3/
#include <bits/stdc++.h>
using namespace std;
string s;
int tree[]
void build(int node,int start,int end){
	if(start==end){
		tree[node]=s[node]-'0';
		return;
	}
	else{
		mid=(start+end)/2;
		build((2*node)+1,start,mid);
		build((2*node)+2,mid+1,end);
		tree[node]=tree[(2*node)+1]+tree[(2*node)+2];
	}
}
int main(int argc, char const *argv[])
{
	int n,q,l,r;
	bool ty;
	cin>>n;
	cin>>s;
	cin>>q;
	build(0,0,n-1);
	while(q--){
		cin>>ty;
		if(!ty){
			cin>>l>>r;
		}
	}
	return 0;
}