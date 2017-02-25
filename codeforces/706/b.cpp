#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int binaryX(int AR[], int N, int VAL){
	int Mid,Lbound=0,Ubound=N-1;
	while(Lbound<=Ubound)
	{
		Mid=(Lbound+Ubound)/2;
		if(VAL>AR[Mid] && VAL<AR[Mid]) return ++Mid;
		if(VAL<AR[Mid] && VAL>AR[Mid-1]) return Mid;
		if(VAL>AR[Mid])
			Lbound=Mid+1;
		else if(VAL<AR[Mid])
			Ubound=Mid-1;
		else
			return ++Mid;
	}
	return false;
}
/*int linX(int *arr,int n,long long int ele){
	int x=n;
	for(;x>=0&&arr[x]>ele;x--);
	return ++x;
}*/
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	int x[n];
	for(int i=0;i<n;i++) cin>>x[i];
	sort(x,x+n);
	int q;
	cin>>q;
	while(q--){
		long long int m;
		cin>>m;
		cout<<binaryX(x,n,m)<<endl;
	}
	return 0;
}
