//http://www.spoj.com/problems/ANARC08G/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{	int x=1;
	while(1){
		int t;
		scanf("%d",&t);
		if(!t) break;
		int arr[1000][1000];
		int sum=0;
		for(int i=0;i<t;i++){
			for(int j=0;j<t;j++){
				scanf("%d",&arr[i][j]);
				sum+=arr[i][j];
			}
		}
		// find row sum
		int rowsum[1000];
		for(int i=0;i<t;i++){
			rowsum[i]=0;
			for(int j=0;j<t;j++){
				rowsum[i]+=arr[i][j];
			}
		}
		// now calculate colsum
		int colsum[1000];
		for(int i=0;i<t;i++){
			colsum[i]=0;
			for(int j=0;j<t;j++){
				colsum[i]+=arr[j][i];
			}
		}
		// now find difference
		// max difference is the value
		int diff[1000];
		int max=0;
		for(int i=0;i<t;i++){
			diff[i]=abs(rowsum[i]-colsum[i]);
			if(diff[i]>max) max=diff[i];
		}
		printf("%d. %d %d\n",x,sum,max);
		x++;

	}

	return 0;
}