#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int numZ(bool *arr,int n){
	int res=0;
	for(int i=0;i<n;i++){
		if(arr[i]==0) res++;
	}
	return res;
}
int numNonZ(bool *arr,int n){
	int res=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0) res++;
	}
	return res;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int minSalary[n];
		bool qual[n][m];

		int offs[m];
		int maxJob[m];

		bool emp[m];
		for(int i=0;i<m;i++) emp[i]=0;
		bool pla[n];
		for(int i=0;i<n;i++) pla[i]=0;

		for(int i=0;i<n;i++) cin>>minSalary[i];
		for(int i=0;i<m;i++){
			cin>>offs[i]>>maxJob[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cin>>qual[i][j];
		}
		int mx=0;
		int index=0;
		int sal=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(qual[i][j]&&maxJob[m]>0&&minSalary[i]<=offs[j]){
					if(mx<offs[j]){
						mx=offs[j];
						index=j;
					}
				}
			}
			if(mx==0) {continue;}
			sal+=(mx);
			emp[index]=1;
			pla[i]=1;
			maxJob[index]--;
		}
		cout<<numNonZ(pla,n)<<" "<<sal<<" "<<numZ(emp,m)<<endl;
	}
	 return 0;
}
