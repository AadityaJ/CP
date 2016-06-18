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
		float prod=(n*1.00);
		for(float j=2.00;j<=n;j+=1.00){
			//printf("%d\n",!prime[(int)j]);
			if(!prime[(int)j] && (n%(int)j==0)){
				prod*=(1.00-(1.00/(j*1.00)));
			}
		}//*/
		printf("%d\n",(int)prod);
	}
	return 0;
}