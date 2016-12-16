#include <iostream>
using namespace std;
int sieve[10000001],prm[11][700000],coun,sieve2[10000001];
void comp()
{
    int t=2;
    coun=2;
    for(int i=1;i<=5000000;i++)
    {
        sieve[2*i]=2;
        sieve2[2*i]=0;
    }
    for(int i=1;i<=3333333;i+=2)
    {
        sieve[3*i]=3;
        sieve2[3*i]=1;
    }
    for(long long i=5;i<=10000000;i+=2)
    {
        if(sieve[i]==0)
        {
            sieve[i]=i;
            sieve2[i]=coun;
            for(long long j=i;(i<=10000)&&(i*j)<=10000000ll;j+=2)
            {
                if(sieve[i*j]==0)
                {
                    sieve[i*j]=i;
                    sieve2[i*j]=coun;
                }
            }
            coun++;
        }
    }
}
int main(int argc, char const *argv[]){
    comp();
    int t,n,x,x2,maxi,maxo,val;
    cin>>t;
    while(t--)
    {
        cin>>n;
        maxo=1;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            x2=x;
            maxi=0;
            while(x2>=2)
            {
                val=sieve[x2];
                maxi=max(maxi,prm[t][sieve2[x2]]);
                while(sieve[x2]==val)   x2/=val;
            }
            maxi++;
            maxo=max(maxi,maxo);
            while(x>=2)
            {

                val=sieve[x];
                prm[t][sieve2[x]]=maxi;
                while(sieve[x]==val)    x/=val;
            }
        }
        cout<<maxo<<endl;
    }
    return 0;
}
