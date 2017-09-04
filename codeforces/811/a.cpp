#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int a,b;
	cin>>a>>b;
	int x=1;
	bool turn=0;
	while(1){
		if(turn==0){
			a-=x;
			if(a<0) {break;}
		}else{
			b-=x;
			if(b<0) break;
		}
		x++;
		turn=(turn)?0:1;
	}
	if(turn==0) cout<<"Vladik";
	else cout<<"Valera";
	return 0;
}
