#include <stdio.h>


int gcd(int a,int b){
	if(!a || !b) return a;
	else return gcd(b,a%b);
}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int g=0;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++) g+=gcd(i,j);
	}
	return 0;
}