//http://www.geeksforgeeks.org/check-if-a-given-number-is-sparse-or-not/
#include <stdio.h>
bool isSparse(int num){
	return (num & (num>>1));
}

int main(int argc, char const *argv[])
{
	printf("%d\n",isSparse(72));
	printf("%d\n",isSparse(12));
	return 0;
}