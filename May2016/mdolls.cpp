//http://www.spoj.com/problems/MDOLLS/en/
#include <bits/stdc++.h>


using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int m;
		cin>>m;
		pair <int,int> dim[m];
		for(int i=0;i<m;i++)
			cin>>dim[i].first>>dim[i].second;
		sort((dim),(dim)+m);
		//for(int i=0;i<m;i++)
		//	cout<<dim[i].first<<"\t"<<dim[i].second<<"\n";
		//sorted 
		int num = 1;
		for(int i=1;i<m;i++){
			if(dim[i].second<dim[i-1].second)
				num++;
		}
		cout<<num;
	}
	return 0;
}
