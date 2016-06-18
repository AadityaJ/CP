#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a,b;
	scanf("%d %d",&a,&b);
	int cnt;
	long long int prod=1;
	for(int i=2;i<b;i++){
		//int val=fact(i);
		//printf("%lld\n",fact(i));
		prod*=i;
		//printf("%d\n",(prod%b));
		if(!(prod%b)) break;
		if(!(prod%a)){
			// do while it is not /le by b
			cnt=0;
			while((prod%b)){
				cnt++;
				prod*=i;
				i++;
			}
			break;
		}
		//if(!(val%a) && (val%b)) cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}