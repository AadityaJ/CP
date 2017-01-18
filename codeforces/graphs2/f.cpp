//http://codeforces.com/problemset/problem/639/B
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n,d,h;
	cin>>n>>d>>h;
	if(d>(2*h) || (h==1 && d==1 && n>2)) {cout<<"-1"<<endl;return 0;}
	int x=2;
	for(int i=1;i<(h+1);i++){
		cout<<i<<" "<<i+1<<endl;
		x++;
	}
	d-=h;
	if(d>0){
		for(int i=0;i<(d);i++){
			if(i==0){
				cout<<1<<" "<<x<<endl;
			}
			else cout<<x<<" "<<x+1<<endl;
			x++;
		}
	}
	for(int i=x;i<=n;i++){
		cout<<h<<" "<<i<<endl;
	}
	return 0;
}
