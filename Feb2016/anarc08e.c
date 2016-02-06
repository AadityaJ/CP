//http://www.spoj.com/problems/ANARC08E/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;
	while(1){
		scanf("%d %d",&a,&b);
		if(a==-1 && b==-1)break;
		if(a==1 || b==1 ) printf("%d+%d=%d \n",a,b,(a+b));
		else printf("%d+%d!=%d\n",a,b,(a+b));
	}
	return 0;
}