#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
void getFour(int *arr,int l,int r,int p){
	long long prod=1;
	for(int i=l;i<=r;i++){
		prod*=arr[i];
		prod%=p;
		cout<<i<<" "<<prod<<endl;
	}
	//cout<<prod<<endl;
	prod=prod%p;
	//cout<<prod<<endl;
	for(long long i=0;i<sqrt(prod) && i<p;i++){
		for(long long j=0;j<sqrt(prod) && j<p;j++){
			for(long long x=0;x<sqrt(prod) && x<p;x++){
				for(long long y=0;y<sqrt(prod) && y<p;y++){
					if((i*i)+(j*j)+(x*x)+(y*y)==prod){cout<<i<<" "<<j<<" "<<x<<" "<<y<<"\n";return;}
				}
			}
		}
	}
	cout<<"-1\n";return;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n,q,p;
		cin>>n>>q>>p;
		int arr[n+1];
		for(int i=1;i<=n;i++) {cin>>arr[i];arr[i]=arr[i]%p;}
		//for(int i=1;i<=n;i++) {cout<<arr[i]<<" ";}
		for(int i=0;i<q;i++){
			int a,x,y;
			cin>>a>>x>>y;
			if(a==1){arr[x]=y;}
			else getFour(arr,x,y,p);
		}
		cout<<endl;
	}
	 return 0;
}
