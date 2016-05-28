//http://www.spoj.com/problems/BLOPER/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n,k;	
	scanf("%d %d",&n,&k);
	bool adj[(n+1)];
	for(int i=1;i<=n;i++)
		adj[i]=false;
	if((((n*(n+1))/2)-k)%2!=0)
		{printf("Impossible \n"); return 0;}
	else {
		int x = (((n*(n+1))/2)-k)/2; 
		// now denomize x
		for(int i=n;i!=0;i--){
			if(x<=n){
				adj[x]=true;
				break;
			}
			if(x-i>0){
				adj[i]=true;
				x=x-i;
			}
			if(x-i==0) {adj[i]=true;break;}
		}
	}
	printf("%d",1);
	for(int i=2;i<=n;i++){
		if(adj[i]) printf("-%d",i);
		else printf("+%d",i);
	}
	return 0;
}