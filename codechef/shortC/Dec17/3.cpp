#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		int curr_sum=0,ans=INT_MAX,front_p=0,last_p=0;
		while(front_p<n){
			curr_sum+=arr[front_p];
			while(curr_sum>=d){
				curr_sum-=arr[last_p++];
			}
			if(curr_sum>d) ans=min(ans,(front_p-last_p)+1);
			front_p++;
		}
	}
	return 0;
}
