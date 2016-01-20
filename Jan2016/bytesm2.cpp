//http://www.spoj.com/problems/BYTESM2/
#include <stdio.h>
int arr[101][101];
int n,l;
int dp(int r,int num_stone,int c){
	
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&l);
		for(int i=0;i<n;i++){
			for(int j=0;j<l;j++)
				scanf("%d",&arr[i][j]);
		}
		int max=0;
		for(int i=0;i<l;i++){
			int num=dp(0,0,i);
			if(num>max) num=max;
		}
		printf("%d\n",num);
	}

	return 0;
}