//http://www.spoj.com/problems/ABA12C/
#include <stdio.h>
#define max 1e+6;
int k;
int arr[105];
int min(int a,int b){
	if(!a || a==-1) return b;
	if(!b || b==-1) return a;
	return (a<b)?a:b;
}
int calc(int i,int sum)
{	//printf("%d %d\n",i,sum);
	if(sum==k) return sum;
	if(arr[i]==-1) return calc(i+1,sum);
	/**case of -1 still left**/
	if(i>k) return -1;
	
	return min(calc(i+1,sum+arr[i]),calc(i+1,sum));
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d %d",&n,&k);
		for(int i=1;i<=k;i++) scanf("%d",&arr[i]);
		int res = calc(1,0);
		printf("%d\n",res);		
	}
	return 0;
}