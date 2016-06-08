//http://www.spoj.com/problems/FOXLINGS/
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
vector<int>arr;
vector<int>size;
//int arr[10000001];
//int size[10000001];
void make_set(int n){
	for(int i=0;i<=n;i++){
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
	int n,m;
	int x,y;
	scanf("%d %d",&n,&m);
	make_set(n);
	for(int i=0;i<m;i++){
		scanf("%d %d",&x,&y);
		uni(x,y);
	}
	//printf("\n");
	//for(int i=1;i<=n;i++)
	//	printf("%d ",arr[i]);
	//printf("\n");
	std::sort(arr,arr+(n+1));
	//for(int i=1;i<=n;i++)
	//	printf(" %d ",arr[i]);
	int count=1;
	for(int i=2;i<=n;i++){
		if(arr[i]!=arr[i-1]) count++;
	}
	printf("%d\n",count);
	return 0;
}