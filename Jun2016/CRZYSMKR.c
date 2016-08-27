#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		long long int n;
		scanf("%lld",&n);
		for(int i=0;1;i++){
			if(!(((30*n)+i)%11)){
				printf("%d\n",i);break;
			}
		}
	}
	return 0;
}