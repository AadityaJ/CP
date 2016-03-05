//http://www.spoj.com/problems/STPAR/
#include <iostream>
using namespace std;
// for any number l :: l+1 should either be just in front or behind
// shitty logic think again
int arr[1001];
int min(int num){
	int min=1010;
	for(int i=0;i<num;i++){
		if(min > arr[i]) min = arr[i];
	}
	return min;
}
int max(int num){
	int max=0;
	for(int i=0;i<num;i++){
		if(max < arr[i]) max = arr[i];
	}
	return max;
}
bool find(int n,int x){
	bool res=0;
	for(int i=0;i<n;i++){
		if(arr[i]==(x+1)) res=1;
	}
	return res;
}
int main(int argc, char const *argv[])
{
	int num;
	while(1){
		cin>>num;
		if(!num) break;
		for(int i=0;i<num;i++) {cin>>arr[i];}
		bool res = 0;
		//res = 1 => no else yes
		int mi = min(num);
		int mx = max(num);
		for(int i=0;i<num;i++){
			if(arr[i]=mi || arr[i]==mx) continue;
			if(arr[i]+1==arr[i+1] || find(i,arr[i])) continue;
			res = 1;
		}
		if(res) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}

	return 0;
}