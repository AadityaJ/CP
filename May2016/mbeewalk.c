#include <stdio.h>
#define n 17
int way[15][n][n];
int list[15];
void calc(){

	way[0][8][8] = 1;
    for ( int k = 1; k <= 14; k++) {
        for ( int i = 1; i < n; i++ ) {
            for ( int j = 1; j < n; j++ ) {
                way[k][i][j] = way[k-1][i][j+1]+way[k-1][i][j-1]
                                +way[k-1][i+1][j]+way[k-1][i-1][j]
                                +way[k-1][i+1][j-1]+way[k-1][i-1][j+1];
            }
        }
        list[k] = way[k][8][8];
    }
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	calc();
	while(t--){
		int num;
		scanf("%d",&num);
		printf("%d\n",list[num]);
	}
	return 0;
}