//http://www.spoj.com/problems/MPILOT/en/
#include <stdio.h>
int arr[10001][2];
int n;
//int pil=0,ass=0;
int min(int a,int b){
	return (a<b)?a:b;
}
int calc(int i,int a,int pil,int asn){
	//if(i==n) {return 0;}
	if(i==n){
		if(asn==pil) return 0;
		else return -1000;
	}
	if(a==0) return arr[i][a]+min(calc(i+1,a,pil+1,asn),calc(i+1,!a,pil,asn)) ;
	else asn ++; 
	
}
int main(int argc, char const *argv[])
{	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&arr[i][0],&arr[i][1]);
	}
	int res=min(calc(0,0,0,0),calc(0,1,0,0));
	printf("%d\n",res);
	return 0;
}