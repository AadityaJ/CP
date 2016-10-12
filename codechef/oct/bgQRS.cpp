#include <iostream>
using namespace std;
void mult(int *arr,int l,int r,int x){
    for(int i=l;i<=r;i++) arr[i]*=x;
}
void ap(int *arr,int l,int r,int x){
    int diff=x;
    for(int i=l;i<=r;i++){
        arr[i]=diff;
        diff+=x;
    }
}
int calcTrai(long long int x){
    int res=0;
    while(x){
        if(x%10==0) res++;
        x/=10;
    }
    return res;
}
int zero(int *arr,int l,int r){
    long long int prod=1;
    for(int i=l;i<=r;i++){
        prod*=arr[i];
    }
    return calcTrai(prod);
}
void printArr(int *arr,int n){
    for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n+1];
        for(int i=1;i<=n;i++){cin>>arr[i];}
        int l,r,x,type;
        int ans=0;
        //cout<<zero(arr,2,5);
        for(int i=0;i<m;i++){
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
