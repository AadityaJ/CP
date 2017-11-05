#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,sig;
		cin>>n>>sig;
		if(n==1){
			if(sig==0) cout<<"0\n";
			else cout<<"-1\n";
			continue;
		}
		double v=(sig*1.0000)*(sqrt(n/2.0000));
		if(v==0) cout<<setprecision(10)<<v<<" ";
		else cout<<setprecision(10)<<(-1*v)<<" ";
		for(int i=1;i<(n-1);i++) cout<<"0 ";
		cout<<setprecision(10)<<(v)<<endl;
		cout<<fixed;
	}
	return 0;
}
