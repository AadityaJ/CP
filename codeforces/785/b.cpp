#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#define MAX 200001
using namespace std;
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	pair<int,int> p_1[MAX];
	for(int i=0;i<n;i++) cin>>p_1[i].first>>p_1[i].second;
	//for(int i=0;i<n;i++) cout<<p_n[i].first<<p_n[i].second;
	int m;
	cin>>m;
	pair<int,int> p_2[MAX];
	for(int i=0;i<m;i++) cin>>p_2[i].first>>p_2[i].second;
	//for(int i=0;i<n;i++) cout<<p_m[i].first<<p_m[i].second;
	int min_r1=INT_MAX,max_l1=INT_MIN;
	int min_r2=INT_MAX,max_l2=INT_MIN;
	for(int i=0;i<n;i++){
		if(p_1[i].second<min_r1) min_r1=p_1[i].second;
		if(p_1[i].first>max_l1) max_l1=p_1[i].first;
	}
	for(int i=0;i<m;i++){
		if(p_2[i].second<min_r2) min_r2=p_2[i].second;
		if(p_2[i].first>max_l2) max_l2=p_2[i].first;
	}
	int x=max(max_l2-min_r1,max_l1-min_r2);
	if(x<0)cout<<0;
	else cout<<x;
	return 0;
}
