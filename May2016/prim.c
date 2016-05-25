#include <stdio.h>
#include <limits.h>
int g[100][100];
int v;
int minkey(int key[],bool mstset[]){
	int min=INT_MAX;
	int min_index=0;
	for(int i=0;i<v;i++){
		if(!mstset[i] && key[i]<min){
			min=key[i];
			min_index=i;
		}
	}
	return min_index;
}
void printMST(int parent[]){
	printf("Edge Weight \n");
	for(int i=0;i<v;i++){
		printf("%d %d  - %d\n",parent[i],i,g[i][parent[i]]);
	}
}
void createMST(){
	int parent[v];
	bool mstset[v];
	int key[v];
	for(int i=0;i<v;i++){
		key[i]=INT_MAX,mstset[i]=false;
	}


	// pick first one
	parent[0]=-1;
	key[0]=0;
	for(int i=0;i<v;i++){
		int u = minkey(key,mstset);
		mstset[u]=true;

		for(int x=0;x<v;x++){
			if(!mstset[x] && g[u][x] && key[x]>g[x][u])
				key[x]=g[x][u],parent[x]=u;



		} 
	}
	printMST(parent);
}
int main(int argc, char const *argv[])
{
	v=5;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++)
			scanf("%d",&g[i][j]);
	} 
    // Print the solution
    createMST();

	return 0;
}