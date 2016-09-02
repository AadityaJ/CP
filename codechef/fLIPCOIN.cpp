//https://www.codechef.com/problems/FLIPCOIN
//first approach watch time expensive
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int n,q;
    cin>>n>>q;
    int flipsum[n];
    for(int i=0;i<n;i++) flipsum[i]=0;
    while(q--){
        int sw,a,b;
        cin>>sw>>a>>b;
        if(sw){
            // count nos of 1s between a and b
            //int count=0;
            //for(int i=a;i<=b;i++){if(arr[i])count++;}
            cout<<(flipsum[b]-flipsum[a])<<endl;
        }
        else{
            //for(int i=a;i<=b;i++){arr[i]=1-arr[i];}
            int inc=(b-a)+flipsum[b]-flipsum[a];
            int prevflipsum=flipsum[b];
            flipsum[b]=flipsum[a]+inc;
            //cout<<flipsum[b]<<"  flipsum \n";
            for(int x=b+1;x<n;x++) flipsum[x]+=(flipsum[b]-prevflipsum);
        }
    }
    return 0;
}
