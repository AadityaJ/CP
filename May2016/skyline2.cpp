#include <stdio.h>
#include <utility>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		pair <pair<long long int,long long int> ,bool>var[100];
		for(int i=0;i<n;i++){
			cin>>var[i].first.first>>var[i].first.second;
			var[i].second=false;
		}
		sort(var,var+n);
		for(int i=0;i<n;i++){
			cout<<var[i].first.first<<"\t"<<var[i].first.second<<"\t"<<var[i].second<<endl;
		}
		// now sorted
		
	}
	return 0;
}