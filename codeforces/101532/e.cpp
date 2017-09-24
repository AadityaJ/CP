#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
string con2bit(int n){
	string str="";
	if(n==0) return "0";
	while(n){
		str.push_back((n%2)+'0');
		n/=2;
	}
	//reverse(str.begin(),str.end());
	return str;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		n++;
		int arr[n];
		for(int i=0;i<(n-1);i++){cin>>arr[i];}
		arr[n-1]=0;
		int c[21]={0};
		int sm=0;
		for(int i=0;i<n;i++){
			string str=con2bit(arr[i]);
			cout<<str<<" :: ";
			//cout<<str<<endl;
			for(int j=0;j<21&& j<str.size();j++){
				if(str[j]=='0'){
					sm+=((c[j]*(c[j]-1)/2)+c[j])*pow(2,j);
					c[j]=0;
					cout<<sm<<" ";
				}
				else{
					c[j]++;
				}
			}
			cout<<sm<<"\n";
		}
		cout<<sm<<endl;
	}
	return 0;
}
