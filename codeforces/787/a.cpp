#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool isIn(int b,int a,int x){
	return (x-b)%a==0;
}
bool isEven(int a){return a%2==0;}
int main(int argc, char const *argv[]) {
	int a,b,c,d;
	cin>>a>>b;
	cin>>c>>d;
	if(isEven(a)&&!isEven(b)&&isEven(c)&&isEven(d)) {cout<<-1;return 0;}
	if(isEven(a)&&isEven(b)&&isEven(c)&&!isEven(d)) {cout<<-1;return 0;}
	for(int x=0;;x++){
		if(isIn(b,a,x)&&isIn(d,c,x)){
			cout<<x;return 0;
		}
	}
	cout<<-1;
	return 0;
}
