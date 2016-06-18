//http://www.spoj.com/problems/ETF/
#include <stdio.h>

#define MAX 1000001

bool prime[MAX]={0};

void init(){
	for(int i=2;i<MAX;i++){
		if(!prime[i]){
			for(int j=i*2;j<MAX;j+=i)
				prime[j]=1;
		}
	}
}

// now found prime numbers till n_max

int main(int argc, char const *argv[])
{
	int t;
	init();
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int prod=n;
		for(int j=0;j<n;j++){
			if(!prime[j]){
				prod*=(1-(1/j));
			}
		}
		printf("%d\n",prod);
	}
	return 0;
}