#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int max1=0,max2=0;
		int sum1=0,sum2=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x>max1) max1=x;
			sum1+=x;
		}
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x>max2) max2=x;
			sum2+=x;
		}
		if((sum1-max1)<(sum2-max2)){
			cout<<"Alice\n";
		}else if((sum1-max1)>(sum2-max2)){
			cout<<"Bob\n";
		}else cout<<"Draw\n";
	}
	return 0;
}
