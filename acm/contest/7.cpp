#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(int argc, char const *argv[]){
	int a,b;
	cin>>a>>b;
	map<int,int> mp;
	for(int i=1;i<=b;i++){
		for(int j=(a/i)*i;j<=b;j+=i){
			mp[j]+=i;
		}
	}
	long long int sum=0;
	for(int i=a;i<=b;i++){
		//cout<<i<<endl;
		sum+=mp[i];
	}
	cout<<sum<<endl;
	return 0;
}
