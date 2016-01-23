//http://www.spoj.com/problems/MPILOT/en/
#include <stdio.h>
int arr[10001][2];
int n;
int pil=0,asn=0;
int max(int a,int b){
	return (a>b)?a:b;
}
int calc(int i,int a){
	if(i==n) {
		if(pil==(asn/2))return 0;
		else return -10000;}
	if(a==0) pil++;
	else asn++;
	return arr[i][a]+max(arr[i+1][a],arr[i+1][!a]);
}
int main(int argc, char const *argv[])
{	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&arr[i][0],&arr[i][1]);
	}
	int res=max(calc(0,0),calc(0,1));
	printf("%d\n",res);
	return 0;
}