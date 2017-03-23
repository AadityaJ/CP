#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int poly(string s){
	if(s=="Tetrahedron") return 4;
	if(s=="Cube") return 6;
	if(s=="Octahedron") return 8;
	if(s=="Dodecahedron") return 12;
	if(s=="Icosahedron") return 20;
}
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	string s;
	int cnt=0;
	for(int i=0;i<n;i++){
		cin>>s;
		cnt+=poly(s);
	}
	cout<<cnt;
	return 0;
}
