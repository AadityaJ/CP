#include <stdio.h>
long long int fact(int i){
	if(!i) return 1;
	return i*fact(i-1);
}

int main(int argc, char const *argv[])
{
	int a,b;
	scanf("%d %d",&a,&b);
	for(int i=1;i<=a;i++){
		int val=fact(i);
		printf("%lld\n",fact(i));
		if((!a%val) && (b%val)) printf("%d\n",i);
	}
	return 0;
}