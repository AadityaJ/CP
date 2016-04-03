//http://www.spoj.com/problems/PT07Z/
#include <iostream>
#include <set>
using namespace std;
int main(int argc, char const *argv[])
{	
	int n,i,j;
	cin>>n;
	set <int> myset[(n+1)];
	for(int x=0;x<(n-1);x++){
		cin>>i>>j;
		myset[i].insert(j);
		myset[j].insert(i);
	}
	int max=0;
	for(int x=0;x<n;x++){
		int val= *(myset[x].end());
		if(max < val)
			max=val;
	}
	cout<<max<<endl;
	return 0;
}