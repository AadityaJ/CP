#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n,k,t;
	cin>>n>>k>>t;
	if(t>=k && t<=n) cout<<k<<endl;
	else if(t<k) cout<<t<<endl;
	else cout<<((n+k)-t)<<endl;
	return 0;
}
