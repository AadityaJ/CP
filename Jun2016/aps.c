#include <stdio.h>



int main(int argc, char const *argv[])
{
	printf("shdlkhd\n");
	long long int f[10000001],a[10000001];
	for(long long int i=2;i<=10000000;i++){
		if(!f[i]){
			f[i]=i;
			for(long long int j=i*i;j<=10000000;j+=i){
				if(!f[j]) f[j]=i;
			}

		}
		a[i]=a[i-1]+f[i];
	}
	int t;

	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%lld\n",a[n]);
	}
	return 0;
}