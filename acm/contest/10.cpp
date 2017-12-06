#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]){
	map<int,bool> mp;
	for(int i=1;i<=9;i++){
		int val=((pow(2,i)-1)*(pow(2,i-1)));
		mp[val]=1;
	}
	int n;
	cin>>n;
	int ans=1;
	for(int i=n;i>=1;i--){
		if((n%i==0) && mp[i]){ans=i;break;}
	}
	cout<<ans<<endl;
	return 0;
}
