#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	if(n==1) {cout<<"0";return 0;}
	if(n==2) {cout<<min(a,b);return 0;}
	if(c==min(c,min(a,b))){
		cout<<(c*(n-2)+min(a,b));
		return 0;
	}
	cout<<min(a,b)*(n-1);
	return 0;
}
