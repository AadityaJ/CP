//http://www.spoj.com/problems/AMR11E/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	// pre computations
	int var[2701]={0};
	int ans[1001];
	for(int i=2;i<2700;i++){
		if(!var[i]) {
			for(int j=i*2;j<2700;j+=i) var[j]++;
		}
	}
	int j=0;
	for(int i=0;i<2700;i++){
		if(var[i]>=3) ans[j++]=i;
	}
	int n;
	scanf("%d",&n);
	while(n--){
		int a;
		scanf("%d",&a);
		printf("%d\n",ans[a-1]);
	}
	return 0;
}