//http://www.spoj.com/problems/ACODE/
#include <stdio.h>
int calc(int num){
	if(!num) return 0;
	int a = num%10;
	if(a+((num/10+
		)%10)*10 <= 26)
		return (1+calc(num/10))+calc(num/10);
	else return calc(num/10);
}
int main(int argc, char const *argv[])
{
	int a;
	while(1){
		scanf("%d",&a);
		if(!a) break;
		printf("%d\n",calc(a)); 
	}
	return 0;
}