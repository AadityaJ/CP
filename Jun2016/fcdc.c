#include <stdio.h>

/*long long int fact(int i){
	if(!i) return 1;
	return i*fact(i-1);
}*/
 
int main(int argc, char const *argv[])
{
	long long int a,b;
	scanf("%lld %lld",&a,&b);
	printf("%lld ecfecfe \n",a);
	long long int cnt=0;
	unsigned long long int val=1;
	for(long long int i=1;i<b;i++){
		printf("%lld %lld \n",i,val);
		val*=i;
		//printf("%lld\n",fact(i));
		if(!(val%b)) break;
		if(!(val%a) && (val%b)) cnt++;
		//printf("%d %lld %d\n",i,val,cnt);
	}
	printf("%lld\n",cnt);
	return 0;
}