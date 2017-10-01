#include <bits/stdc++.h>
using namespace std;
const int N=773;
const long long mod=23513892331591;
int n,ap[400],Fact[2*N];;
long long a[N],val[N];
int code(int x)
{
    int ans=1;
    for(int i=2;i*i<=x;++i)
    {
        int par=0;
        while(x%i==0) par^=1,x/=i;
        if(par&1) ans*=i;
    }
    if(x>1) ans*=x;
    return ans;
}
const int dpmod=1e9+7;
int dp[N][N],Com[2*N][2*N];
int add(int ax,int b)
{
	ax+=b;
	if(ax>=dpmod) ax-=dpmod;
	else if(ax<0) ax+=dpmod;
	return ax;
}
int mul(int aq, int b)
{
	return (long long)aq*b%dpmod;
}
void combii()
{
	Com[0][0]=1;
	for(int i=1;i<2*N;++i)
	{
		Com[i][0]=1;
		Com[i][1]=i;
		Com[i][i]=1;
		for(int j=2;j<i;++j) Com[i][j]=add(Com[i-1][j],Com[i-1][j-1]);
	}
}
void Solve()
{
	Fact[0]=1;
	combii();
	for(int i=1;i<2*N;++i) Fact[i]=mul(i,Fact[i-1]);
	int on=n;
	n=0;
	dp[1][ap[1]-1]=1;
	for(int i=1;i<=on;++i)
	{
		n+=ap[i];
		for(int j=0;j<n;++j)
		{
			dp[i][j]%=dpmod;
			for(int k=1;k<=ap[i+1];++k)
			{

				for(int l=0;l<=k;++l)
				{
					int nr=j-l+ap[i+1]-k;
					if(nr<0) continue;
					long long delta=mul(Com[j][l],Com[n-j+1][k-l]);
					delta=mul(delta,Com[ap[i+1]-1][k-1]);
					dp[i+1][nr]=add(dp[i+1][nr],mul(delta,dp[i][j]));
				}
			}
		}
	}
	int valq=dp[on][0];
	for(int i=1;i<=on;++i) valq=1LL*valq*Fact[ap[i]]%dpmod;
	cout<<valq;
}
int main()
{
    cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i];
	for(int i=1;i<=n;++i) val[i]=code(a[i]);
	sort(val+1,val+n+1);
	map <long long,int> aux;
	for(int i=1;i<=n;++i) ++aux[val[i]];
	vector <int> vec;
	int new_n=0;
	for(auto it:aux) ap[++new_n]=it.second;
	n=new_n;
	Solve();
	return 0;
}
