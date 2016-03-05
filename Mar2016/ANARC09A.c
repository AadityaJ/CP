//http://www.spoj.com/problems/ANARC09A/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char str[2001];
	int index=1;
	while(1){
		scanf("%s",&str);
		if(str[0]=='-') break;
		int i=0;
		int op=0,pa=0;
		while(str[i]!='\0'){
			if(str[i]=='{') op++;
			else{
				op--;
				if(op<0){op=1;pa++;}
			}
			i++;
		}
		int val=pa+op/2;
		printf("%d. %d\n",index ++,val);
	}
	return 0;
}