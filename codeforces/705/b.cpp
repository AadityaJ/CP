#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void __check__(int num,int sum){
	if(num%2==1 && sum%2==0) cout<<1<<endl;
	else if(num%2==1 && sum%2==1) cout<<2<<endl;
	else if(num%2==0 && sum%2==0) cout<<2<<endl;
	else cout<<1<<endl;
}
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=0;i<n;i++) cin>>arr[i];
	int sum=0,num=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=1){
			num++;
			sum+=arr[i];
		}
		__check__(num,sum);
	}
	return 0;
}
