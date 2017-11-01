#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	long long int a,b;
	cin>>a>>b;
	if((b-a)>=10) cout<<"0\n";
	else{
		int ans=1;
		for(long long int i=a+1;i<=b;i++){
			ans*=(i%10);
			ans=(ans%10);
		}
		cout<<ans<<endl;
	}
	return 0;
}
