#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	int max1=0,max2=0;
	long long int sum=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		sum+=x;
	}
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x>=max1){
			max2=max1;
			max1=x;
		}else if(x>=max2){
			max2=x;
		}
	}
	//cout<<max1<<" "<<max2;
	if(sum>(max1+max2)){cout<<"NO\n";}
	else cout<<"YES\n";
	return 0;
}
