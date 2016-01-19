//www.spoj.com/problems/SCUBADIV/
#include <stdio.h>
int max(int a,int b){
	return (a<b)?b:a;
}
int knp(int wo,int wn,int wt[][2],int val[],int n){
	if(n==0 || (wo==0 && wn==0)) return 0;
	if(wo<wt[n-1][0] && wn<wt[n-1][1]) return knp(wo,wn,wt,val,n-1);
	else return max(val[n-1]+knp(wo-wt[n-1][0],wn-wt[n-1][1],wt,val,n-1),knp(wo,wn,wt,val,n-1));
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int wo,wn,wt[1001][2],val[1001];
		int n;
		scanf("%d %d",&wo,&wn);
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d %d",&wt[i][0],&wt[i][1]);
			scanf("%d",&val[i]);
		}
		int res=knp(wo,wn,wt,val,n);
		printf("%d\n",res);
	}
	return 0;
}