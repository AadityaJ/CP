#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
		int a=1,b=2;
		for(int i=0;i<(2*n+p);i++){
			cout<<a<<" "<<b<<endl;
			b++;
			if(b>n){
				a++;
				b=a+1;
			}
		}
	}
	return 0;
}
