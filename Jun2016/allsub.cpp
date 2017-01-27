#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char  str[] ="abcd";
	int len = 4;
	for(int i=0;i<(1<<len);i++){
		printf("\n { ");
		for(int j=0;j<len;j++){
			if(i &(1<<j))
				printf("%c ",str[j]);
		}
		printf("} \n");
	}
	return 0;
}