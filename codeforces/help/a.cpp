#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int a,b;
	cin>>a>>b;
	for(int x=1;;x++){
		a=a*3;
		b=b*2;
		if(a>b){cout<<x;break;}
	}
	return 0;
}
