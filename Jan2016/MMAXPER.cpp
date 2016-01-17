//http://www.spoj.com/problems/MMAXPER/en/
#include <stdio.h>
#include <stdlib.h>    
using namespace std;
int arr[1001][2];
int n;   //size
int calc(int i){
	bool which;
	printf("%d\n",i);
	if(arr[i][0]>arr[i][1]) which =0;
	else which =1;
	if(i==n-1){
		if(!which) return arr[i][0]+abs(arr[i-1][1]-arr[i][1]);
		else return arr[i][1]+abs(arr[i-1][0]-arr[i][0]);
	}
	if(i==0){
		if(!which) return arr[i][0]+calc(i+1);
		else return arr[i][1]+calc(i+1);
	}
	if(!which)
		return arr[i][0]+abs(arr[i-1][1]-arr[i][1])+calc(i+1);
	else return arr[i][1]+abs(arr[i-1][0]-arr[i][0])+calc(i+1);
}
int main(int argc, char const *argv[])
{
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i][0]);
		scanf("%d",&arr[i][1]);
	}
	int ans=calc(0);
	printf("%d\n",ans);
	return 0;
}