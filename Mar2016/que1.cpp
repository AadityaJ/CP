//http://www.spoj.com/problems/QUE1/
//this is an erronus algorithm
#include <queue>
#include <iostream>
using namespace std;
int arr[1001],height[1001];
bool more_than(int num,int par[],int n,int a){
	int t=0;
	for(int i=0;i<n;i++){
		if(par[i] > num) t++;
	}
	return t==a;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		queue <int> q;
		int n;
		cin>>n;
		for(int i=0;i<n;i++) cin>>arr[i];
		for(int i=0;i<n;i++) cin>>height[i];

	}
	return 0;
}