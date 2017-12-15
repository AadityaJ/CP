#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
long long dist(int ax,int ay,int bx,int by){
	return ((ax-bx)*(ax-bx))+((ay-by)*(ay-by));
}

int main(int argc, char const *argv[]) {
	int ax,ay,bx,by,cx,cy;
	cin>>ax>>ay>>bx>>by>>cx>>cy;
	if(dist(ax,ay,bx,by)!=dist(bx,by,cx,cy)){
		cout<<"No\n";return 0;
	}
	if(((cy-by)*(bx-ax))==((by-ay)*(cx-bx))){
		//cout<<((cy-ay)*(bx-ax));
		//cout<<((by-ay)*(cx-ax));
		cout<<"No\n";return 0;
	}
	cout<<"Yes\n";
	return 0;
}
