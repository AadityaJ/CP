#include <iostream>
using namespace std;
void mult(unsigned long long int *arr,long long int l,long long int r,long long int x){
    for(long long int i=l;i<=r;i++) arr[i]*=x;
}
void ap(unsigned long long int *arr,long long int l,long long int r,long long int x){
    long long int diff=x;
    for(long long int i=l;i<=r;i++){
        arr[i]=diff;
        diff+=x;
    }
}
/*long long int calcTrai(long long long long int x){
    long long int res=0;
    while(x){
        if(x%10==0) res++;
        x/=10;
    }
    return res;
}*/
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
long long int zero(unsigned long long int *arr,long long int l,long long int r){
    long long int num_twos=0,num_fives=0,num_tens=0;
    for(long long int i=l;i<=r;i++){
        //prod*=arr[i];
        //if(arr[i]%10==0) num_tens++;
        //else if(arr[i]%5==0) num_fives++;
        //else if(arr[i]%2==0) num_twos++;
        //num+=min(numPowof(arr[i],2),numPowof(arr[i],5))+numPowof(arr[i],10);
        num_tens+=numPowof(arr[i],10);
        num_twos+=(numPowof(arr[i],2)-numPowof(arr[i],10));
        num_fives+=(numPowof(arr[i],5)-numPowof(arr[i],10));
    }
    //cout<<num_tens<<" "<<num_twos<<" "<<num_fives<<endl;
    return num_tens+min(num_twos,num_fives);
}
/*void prlong long intArr(long long int *arr,long long int n){
    for(long long int i=1;i<=n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}*/
int main(int argc, char const *argv[]) {
    long long int t;
    cin>>t;
    while(t--){
        //cout<<"numPowof2 "<<numPowof(2000,10)<<endl;
        long long int n,m;
        cin>>n>>m;
        unsigned long long int arr[n+1];
        for(long long int i=1;i<=n;i++){cin>>arr[i];}
        long long int l,r,x,type;
        long long int ans=0;
        //cout<<zero(arr,2,5);
        for(long long int i=0;i<m;i++){
            cin>>type;
            //cout<<type<<endl;
            switch(type){
                case 1:cin>>l>>r>>x;mult(arr,l,r,x);break;
                case 2:cin>>l>>r>>x;ap(arr,l,r,x);break;
                case 3:cin>>l>>r;ans+=zero(arr,l,r);break;
            }
            //printArr(arr,n);
        }
        cout<<ans<<endl;
    }
    return 0;
}
