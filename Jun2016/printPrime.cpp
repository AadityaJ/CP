#include <stdio.h>

int main(int argc, char const *argv[])
{
	bool prime[1001]={0};
	for(int i=2;i<1000;i++){
		if(!prime[i]){
			for(int j=i*2;j<1000;j+=i) prime[j]=1;
		}
	}
	for(int i=2;i<1000;i++){
		if(!prime[i]) printf("%d\n",i);
	}
	return 0;
}