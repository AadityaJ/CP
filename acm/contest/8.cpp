#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(int argc, char const *argv[]){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	int ans=INT_MAX;
	int sum=0;
	int l=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		while(sum>=180){
			ans=min(ans,2*abs(180-sum));
			sum-=arr[l];
			l++;
		}
		ans=min(ans,2*abs(180-sum));
	}
	cout<<ans<<endl;
	return 0;
}
