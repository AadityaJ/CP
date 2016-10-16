#include <iostream>
using namespace std;
long long int numPowof(long long int x,long long int mod){
    long long int count=0;
    if(x%mod!=0) return count;
    while(x){
        x/=mod;
        count++;
        if(x%mod!=0) return count;
    }
    return ++count;
}
void mult(unsigned long long int *num_2,unsigned long long int *num_5,unsigned long long int *num_10,int l,int r,int x){
    int mod_2=numPowof(x,2);
    int mod_5=numPowof(x,5);
    int mod_10=numPowof(x,10);
    for(long long int i=l;i<=r;i++){
        num_2[i]+=mod_2;
        num_5[i]+=mod_5;
        num_10[i]+=mod_10;
    }
}
void ap(unsigned long long int *num_2,unsigned long long int *num_5,unsigned long long int *num_10,int l,int r,int x){
    long long int diff=x;
    for(long long int i=l;i<=r;i++){
        //arr[i]=diff;
        num_2[i]=numPowof(diff,2);
        num_5[i]=numPowof(diff,5);
        num_10[i]=numPowof(diff,10);
        diff+=x;
    }
}
long long int zero(unsigned long long int *num_2,unsigned long long int *num_5,unsigned long long int *num_10,int l,int r){
    long long int num_twos=0,num_fives=0,num_tens=0;
    for(long long int i=l;i<=r;i++){
        num_tens+=num_10[i];//numPowof(arr[i],10);
        num_twos+=(num_2[i]-num_10[i]);//(numPowof(arr[i],2)-numPowof(arr[i],10));
        num_fives+=(num_5[i]-num_10[i]);//(numPowof(arr[i],5)-numPowof(arr[i],10));
    }
    return num_tens+min(num_twos,num_fives);
}
int main(int argc, char const *argv[]) {
    long long int t;
    cin>>t;
    while(t--){
        //cout<<"numPowof2 "<<numPowof(2000,10)<<endl;
        long long int n,m;
        cin>>n>>m;
        //unsigned long long int arr[n+1];
        unsigned long long int num_2[n+1],num_5[n+1],num_10[n+1];
        for(long long int i=1;i<=n;i++){
            int temp;
            cin>>temp;
            num_2[i]=numPowof(temp,2);
            num_5[i]=numPowof(temp,5);
            num_10[i]=numPowof(temp,10);
        }
        int l,r,x,type;
        long long int ans=0;
        // modify the array to three types
        for(long long int i=0;i<m;i++){
            cin>>type;
            //cout<<type<<endl;
            switch(type){
                case 1:cin>>l>>r>>x;mult(num_2,num_5,num_10,l,r,x);break;
                case 2:cin>>l>>r>>x;ap(num_2,num_5,num_10,l,r,x);break;
                case 3:cin>>l>>r;ans+=zero(num_2,num_5,num_10,l,r);break;
            }
            //printArr(arr,n);
        }
        cout<<ans<<endl;
    }
    return 0;
}
