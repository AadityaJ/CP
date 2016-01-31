//http://www.spoj.com/problems/SAMER08F/
#include <stdio.h>
int main(int argc, char const *argv[]){
    int n;  
    while(1){
        scanf("%d",&n);
        if(n==0) break;
        printf("%d\n",n*(n+1)/2*(2*n+1)/3);
        }
	return 0;
}