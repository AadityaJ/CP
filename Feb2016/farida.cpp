//http://www.spoj.com/problems/FARIDA/
#include <stdio.h>
int max(int a,int b){
	return (a>b)?a:b;	
}
int arr[1000],n;
int calc(int i,int a,int coins){
	if(i==n) return coins;
	if(a==1) return calc(i+1,0,coins);
	return max(calc(i+1,0,coins),calc(i+1,1,coins+arr[i]));
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++) scanf("%d",&arr[i]);
		printf("%d\n",calc(0,0,0));
	}
	return 0;
}