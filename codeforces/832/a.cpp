#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
		int n;
		cin>>n;
		int num_e=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x%2==0) num_e++;
		}
		if(num_e>(n/2)) cout<<"READY FOR BATTLE\n";
		else cout<<"NOT READY\n";
	return 0;
}
