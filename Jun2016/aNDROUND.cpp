//http://www.spoj.com/problems/ANDROUND/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d %d",&n,&k);
		int arr[n];
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);
		//printf("\n");
		// Brute force
		for(int i=0;i<k;i++){
			for(int j=0;j<n;j++){
				if(j==0) {arr[0]=(arr[0]&arr[1])&arr[n-1];}
				else if(j==n-1){arr[n-1]=(arr[n-2]&arr[n-1])&arr[0];}
				else {arr[j]=(arr[j-1]&arr[j])&arr[j+1];}
			}
		}
		//printf("\n");
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);
	}
	return 0;
}