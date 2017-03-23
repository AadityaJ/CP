#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 10004
using namespace std;
int rick[MAX],morty[MAX];
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x;
		cin>>x;
		bool flg=0;
		for(int j=0;j<x;j++){
			int a;
			cin>>a;
			int b=(a*(-1));
			if(a<0){
				rick[b]=i;
				if(rick[b]==morty[b]){
	//				cout<<"NO";
					flg=1;
				}
			}
			else{
				morty[a]=i;
				if(rick[a]==morty[a]){
	//				cout<<"NO";
					flg=1;
				}
			}
		}
		if(flg==0) {cout<<"YES";return 0;}
	}
	cout<<"NO";
	return 0;
}
