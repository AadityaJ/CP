#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#define MAX 200001
using namespace std;
bool compare(const pair<int, int>&i, const pair<int, int>&j)
{
    return i.first < j.first;
}
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	pair<int,int> p_n[MAX];
	for(int i=0;i<n;i++) cin>>p_n[i].first>>p_n[i].second;
	sort(p_n,p_n+n,compare);
	//for(int i=0;i<n;i++) cout<<p_n[i].first<<p_n[i].second;
	int m;
	cin>>m;
	pair<int,int> p_m[MAX];
	for(int i=0;i<n;i++) cin>>p_m[i].first>>p_m[i].second;
	sort(p_m,p_m+m,compare);
	//for(int i=0;i<n;i++) cout<<p_m[i].first<<p_m[i].second;
	int min_r=INT_MAX,min_l=INT_MAX;
	int max_r=INT_MIN,max_l=INT_MIN;
	
	return 0;
}
