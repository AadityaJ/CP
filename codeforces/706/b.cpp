#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	std::vector<int> x(n);
	for(int i=0;i<n;i++) cin>>x[i];
	sort(x.begin(),x.end());
	int q;
	cin>>q;
	while(q--){
		long long int m;
		cin>>m;
		vector<int>::iterator it=upper_bound(x.begin(),x.end(),m);
		if(it==x.begin()){cout<<0<<endl;continue;}
		it--;
		int xc=it-x.begin();
		xc-=95;
		cout<<xc+1<<endl;
	}
	return 0;
}
/*

MAJOR CODING BACKLASH

*/
