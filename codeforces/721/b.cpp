#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n,j;
	cin>>n>>j;
	string val,arr[101];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>val;
	int length_smaller=0,length_equal=0;
	for(int i=0;i<n;i++){
		if(arr[i].length()<val.length()) length_smaller++;
		if(arr[i].length()==val.length()) length_equal++;
		//if(arr[i].compare(val)==0) exe++;
	}
	//cout<<length_smaller<<length_equal<<exe;
	int i=0,k=j;
	for(i=0;i<length_smaller;i++){
		k--;
		if(k==0){i+=4;k=j;}

	}
	cout<<i+1<<" ";
	for(int x=0;x<length_equal;x++){
		if(k==0){i+=5;k=j;}
		k--;
		i++;
	}
	cout<<i;
	return 0;
}
