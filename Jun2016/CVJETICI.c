#include <stdio.h>
int intersect(int x1,int x2,int xi,int xj){
	int diff1=x1-xi;
	int diff2=x2-xj;
	if((diff1<0) && (diff2<0)){
		if(xi>x2) return 0;
		else return 2;
	}
	if((diff2>0)&&(diff1>0)){
		if(x1>xj) return 0;
		else return 2;
	}
	return 1;

}
/*void printres(int arr[][2],int n){
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			cnt+=intersect(arr[i][0],arr[i][1],arr[j][0],arr[j][1]);
		}
	}
	printf("%d\n",cnt);
}*/
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int arr[n][2];
	for(int i=0;i<n;i++) {
		scanf("%d %d",&arr[i][0],&arr[i][1]);
		int cnt=0;
		for(int j=0;j<i;j++) cnt+=intersect(arr[j][0],arr[j][1],arr[i][0],arr[i][1]);
		printf("%d\n",cnt);
	}
	//printres(arr,n);
	return 0;
}