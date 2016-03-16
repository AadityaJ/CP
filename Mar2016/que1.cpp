//http://www.spoj.com/problems/QUE1/
#include <queue>
#include <iostream>
using namespace std;
int arr[1001],height[1001],weights[1001];
int get_num(int index,int n){
	int num=arr[index];
	int val=1;
	for(int i=0;i<n;i++){
		if(arr[i]<num) val++;
	}
	return val;
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
		for(int i=0;i<n;i++){
			weights[i]=get_num(i,n);
		}
		int fin_arr[1001];
		for(int i=0;i<n;i++){
			//if weights are same store smallest ones get printed and all else is stored in the queue
			
		}

	}
	return 0;
}