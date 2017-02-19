#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct station{
	int arr,dep;
};
int main(int argc, char const *argv[]) {
	int a;
	cin>>a;

	station sn[a];
	int cumu[a];
	int sum_=0;
	for(int i=0;i<a;i++){
		cin>>sn[i].dep>>sn[i].arr;
		sum_+=(sn[i].arr-sn[i].dep);
		cumu[i]=sum_;
	}
	int mx=0;
	for(int i=0;i<a;i++){
		if(mx<cumu[i]) mx=cumu[i];
	}
	cout<<mx;
	return 0;
}
