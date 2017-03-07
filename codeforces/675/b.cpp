#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define lli long long int
using namespace std;
int main(int argc, char const *argv[]) {
	int n, a, b, c, d;
	cin>>n>>a>>b>>c>>d;

	lli ans = 0;
	for (int x = 1; x <= n; x++) {
		int y = x + b - c;
		int z = x + a - d;
		int w = a + y - d;
		if (1 <= y && y <= n && 1 <= z && z <= n && 1 <= w && w <= n) {
			ans++;
		}
	}
	ans *= n;

	cout<<ans<<endl;
	return 0;
}
