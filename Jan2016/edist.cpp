//http://www.spoj.com/problems/EDIST/
//longes common subsequence
#include <iostream>
#include <cstring>
#include <algorithm>
//using memoization
char x[2001],y[2001];
using namespace std;
int lcs(int m, int n )
{
   int L[m+1][n+1];
   int i, j;
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
  
       else if (x[i-1] == y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
  
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
   return L[m][n];
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		cin>>x>>y;
		int a=lcs(strlen(x),strlen(y));
		//cout<<"LCS is :: "<<a<<endl;
		int res=max(strlen(x),strlen(y))-a;
		cout<<res<<endl;
	}
	return 0;
}