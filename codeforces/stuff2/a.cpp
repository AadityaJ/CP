#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]){
	int k,l;
	cin>>k>>l;
	bool bad=1;
	int count=0;
	while(l!=1){
		if(l%k!=0){bad=0;break;}
		l/=k;
		count++;
	}
	if(bad) {cout<<"YES\n";cout<<count-1;}
	else cout<<"NO";
	return 0;
}
