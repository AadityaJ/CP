//http://www.spoj.com/problems/BAT2/
//maximal subarray from both left and right
#include <stdio.h>
int arr[105];
int n;
int max(int a,int b){
	return (a>b)?a:b;
}
int calc(int i,int sum,int choice){
	if(i==n) return sum;
	if(arr[i] < arr[i-1] && choice) return sum;
	return max(calc(i+1,sum+1,1),calc(i+1,sum,0));
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		//int i;
		scanf("%d",&n);
		for(int j=0;j<n;j++) scanf("%d",&arr[j]);
		printf("%d\n",calc(0,0,0));
	}
	return 0;
}