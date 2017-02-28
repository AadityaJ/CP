#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void __check__(int sum){
	if(sum%2==0) cout<<2<<endl;
	else cout<<1<<endl;
}
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	int x;
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>x;
		sum+=(x-1);
		__check__(sum);
	}
	return 0;
}
/*
had to see code a little bit. More try on paper would have removed the redundancy
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {

	return 0;
}
