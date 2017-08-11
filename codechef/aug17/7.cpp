#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int leftM(int *arr,int index,int n){
    int x=arr[index];
    int ans=index;
    for(int i=index+1;i<=n;i++){
        if(arr[i]>x){ans=i;break;}
    }
    if(ans==index) return -1;
    return ans;
}
int main(int argc, char const *argv[]) {
	int n,q;
    cin>>n>>q;
    int arr[n+1];
    for(int i=1;i<=n;i++) cin>>arr[i];
    for(int i=0;i<q;i++){
        int num;
        cin>>num;
        if(num==1){
            int a,b;
            cin>>a>>b;
            int index=a;
            for(int x=0;x<b;x++){
                int nxt=leftM(arr,index,n);
                //cout<<x<<" "<<nxt<<endl;
                if(nxt==-1 || nxt-index>100) {break;}
                index=nxt;
            }
            cout<<index<<endl;
        }else{
            int a,b,c;
            cin>>a>>b>>c;
            for(int i=a;i<=b;i++) arr[i]+=c;
        }
    }
	return 0;
}
