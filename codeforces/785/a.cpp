#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#define MAX 200001
using namespace std;
bool compare(const pair<int, int>&i, const pair<int, int>&j)
{
    return i.second < j.second;
}
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	pair<int,int> p_n[MAX];
	for(int i=0;i<n;i++) cin>>p_n[i].first>>p_n[i].second;
	sort(p_n,p_n+n,compare);
	for(int i=0;i<n;i++) cout<<p_n[i].first<<p_n[i].second;
	int m;
	cin>>m;
	pair<int,int> p_m[MAX];
	for(int i=0;i<n;i++) cin>>p_m[i].first>>p_m[i].second;

	return 0;
}
