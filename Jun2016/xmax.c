#include <stdio.h>

int max(int a,int b){ return (a>b)?a:b;}

int maximize(int num[],int xorval,int index,int n){
	if(index==n){return xorval;}


	return max(maximize(num,xorval,index+1,n),maximize(num,xorval^num[index],index+1,n));
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++){scanf("%d",&num[i]);}
	// now maximize

	printf("%d",maximize(num,0,0,n));
	return 0;
}
