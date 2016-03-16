//http://www.spoj.com/problems/TEMPLEQ/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,q;
	int arr[100000];
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<q;i++){
		int ch,val;
		cin>>ch>>val;
		if(ch==1){arr[val]++;}
		if(ch==2){
			int count=0;
			for(int i=1;i<=n;i++)
				if(arr[i]>val)count++;
			cout<<count<<endl;
		}
		if(ch==3){arr[val]--;}
	}
	return 0;
}