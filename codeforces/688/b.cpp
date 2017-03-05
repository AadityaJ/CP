#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	string n;
	cin>>n;
	cout<<n;
	reverse(n.begin(),n.end());
	cout<<n;
	return 0;
}
