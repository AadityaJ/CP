#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 30010
using namespace std;
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	int click=0;
	while(n<m){
		if(m%2==0) m/=2;
		else m++;
		click++;
	}
	cout<<click+(n-m);
	return 0;
}
