#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	long long int n,k;
	cin>>n>>k;
	((n/k)%2)?(cout<<"YES"):(cout<<"NO");
	return 0;
}
