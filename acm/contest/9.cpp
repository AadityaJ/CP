#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int leftOut(int a,int b){
	if((a==1&&b==2) || (a==2 &&b==1)) return 3;
	if((a==1&&b==3) || (a==3 &&b==1)) return 2;
	if((a==3&&b==2) || (a==2 &&b==3)) return 1;
}
int main(int argc, char const *argv[]){
	int n;
	cin>>n;
	pair<int,int> curr_opp=make_pair(1,2);
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x!=curr_opp.first && x!=curr_opp.second){
			cout<<"NO\n";
			return 0;
		}
		curr_opp=make_pair(x,leftOut(curr_opp.first, curr_opp.second));
	}
	cout<<"YES\n";
	return 0;
}
