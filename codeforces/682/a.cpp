#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	long long n,m;
	cin>>n>>m;
	int x=0;
	for(int i=1;i<=n;i++){
		x+=(m+i)/5;
	}
	cout<<x;
	return 0;
}
