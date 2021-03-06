//http://www.spoj.com/problems/BYTESM2/
#include <stdio.h>
int arr[101][101];
int n,l;
int max(int a,int b,int c){
	return (a>b)?((a>c)?a:c):((b>c)?b:c);
}
int iter=0;
int num[105][105];
void init(){
	for(int i=0;i<105;i++)
		for(int j=0;j<105;j++)
			num[i][j]=-1;
}
int dp(int r,int c){
	if(num[r][c]!=-1) return num[r][c];
	iter++;
	if(c<0 || c>=l) return 0;  //out of bounds
	if(r>=n) return 0;
	//if(!r) num_stone+=arr[0][c]; // first iteration
	return num[r][c]=max(dp(r+1,c)+arr[r][c],dp(r+1,c+1)+arr[r][c],dp(r+1,c-1)+arr[r][c]);
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		init();
		scanf("%d %d",&n,&l);
		for(int i=0;i<n;i++){
			for(int j=0;j<l;j++)
				scanf("%d",&arr[i][j]);
		}
		int max=0;
		for(int i=0;i<l;i++){
			int num=dp(0,i);
			//printf("%d\n",num);
			if(num>max) max=num;
		}
		printf("%d\n",max);
	}
	//printf("%d\n",iter);
	return 0;
}