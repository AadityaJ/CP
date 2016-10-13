#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    //lets see if this works
    int n,k,d;
    cin>>n>>k>>d;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int avg_diff=0;
    int last=0;
    int temp;
    for(int i=1;i<=n;i++){
        temp=arr[i];
        avg_diff+=(temp-last);
        last=temp;
    }
    avg_diff/=n;
    int x=arr[1],mx_diff=0,index;
    for(int i=1;i<=n;i++){
        if(mx_diff>(arr[i]-x)){mx_diff=arr[i]-x;index=i;}
        x+=avg_diff;
    }
    cout<<arr[1]<<" "<<avg_diff<<endl;
    // lets delete the worst
    if(k>0){
        for(int i=1;i<(n);i++){
            if(arr[i]>arr[i+1]){
                cout<<"1 "<<i<<" "<<i+1<<endl;
                k--;
                if(k<=0) break;
            }//toswap+="1 "+char(i)+" "+char(i+1)+"\n";
        }
    }
    if(d>0) cout<<"2 "<<index<<endl;
    cout<<"-1";
    return 0;
}
