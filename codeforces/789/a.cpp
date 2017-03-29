#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int main(int argc, char const *argv[]) {
	int n,k;
	cin>>n>>k;
	priority_queue<int> pq;
	int cnt=0;
	for(int i=0;i<n;i++) {int temp;cin>>temp;pq.push(temp);}
	while(!pq.empty()){
		int x=pq.top();
		int y;
		pq.pop();
		if(!pq.empty()){
			y=pq.top();
			pq.pop();
		}
		//cout<<x<<" "<<y<<endl;
		x-=k;
		y-=k;
		if(x>0){pq.push(x);}
		if(y>0){pq.push(y);}
		cnt++;
	}
	cout<<cnt;
	return 0;
}
