#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	long long int val;
	cin>>val;
	bool isit=0;
	for(int i=0;i<=820;i++){
		for(int j=0;j<=8100;j++){
			long long int a=1234567*i;
			long long int b=123456*j;
			if((val-(a+b))%1234==0&&(val-(a+b)>0)){isit=1;break;}
		}
	}
	/*for(int i=0;i<=val;i+=1234567){
		for(int j=0;j<=val-i;j+=123456){
			if((val-(i+j))%1234==0) {isit=1;break;}
			}
		}
	*/
	if(isit)cout<<"YES";
	else cout<<"NO";
	return 0;
}
