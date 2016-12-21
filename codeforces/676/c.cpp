#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int d[11][11];
int main(int argc, char const *argv[]) {
	int n;
	double c[11][11];
	c[0][0]=1.00;
	for(int i=1;i<=10;i++){
		c[i][0]=(c[i-1][0])/2.00;
	}
	for(int i=1;i<=10;i++){
		for(int j=1;j<i;j++){
			c[i][j]=c[i-1][j-1]+c[i-1][j];
		}
		c[i][i]=c[i][0];
	}
	/*for(int i=0;i<=10;i++){
		for(int x=0;x<5-i;x++){
			cout<<" ";
		}
		for(int j=0;j<=i;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}*/
	int last=0;
	for(int i=0;i<11;i++){
		int mx=0;
		for(int j=0;j<=i;j++){
			d[i][j]=(1/c[i][j])+last;
			if(d[i][j]>mx) mx=d[i][j];
		}
		last+=mx;
	}
	for(int i=0;i<=10;i++){
		for(int x=0;x<5-i;x++){
			cout<<" ";
		}
		for(int j=0;j<=i;j++){
			cout<<d[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
