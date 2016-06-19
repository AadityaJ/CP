#include <stdio.h>
#include <ctime>

int gcd(int a,int b){
	if(!a || !b) return a;
	else return gcd(b,a%b);
}
int main(int argc, char const *argv[])
{	
	int n;
	do{
		scanf("%d",&n);
		int start_s=clock();
		int g=0;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++) g+=gcd(i,j);
		}
		if(g) printf("%d\n",g);
		int stop_s=clock();
		printf("Time : %fms\n",(stop_s-start_s)/double(CLOCKS_PER_SEC)*1000);
	}while(n);
	return 0;
}