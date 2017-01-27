#include <stdio.h>
int arr[100];
int size[100];
void make_set(int n){
	for(int i=0;i<n;i++){
		arr[i]=i;
		size[i]=0;
	}
}
int find_set(int x){
	// find parent of x
	// arr[x] is the father of x
	if(x!=arr[x])
		arr[x]=find_set(arr[x]);
	return arr[x];
}
void link(int a,int b){
	if(size[a]>size[b])
		arr[b]=a;
	else{
		arr[a]=b;
		if(size[a]==size[b])
			size[b]+=1;
	}
}
void uni(int a,int b){
	link(find_set(a),find_set(b));
}
int main(int argc, char const *argv[])
{
	//int n;
	//scanf("%d",&n);
	make_set(6);
	uni(1,2);
	uni(2,4);
	uni(3,4);
	printf("\n");
	for(int i=0;i<6;i++)
		printf("%d ",arr[i]);
	return 0;
}