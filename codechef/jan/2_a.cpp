#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;
bool ops(pair<int,int>a,pair<int,int>b){
    return a.second>b.second;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
        pair<int,int> arr[500];
        vector<int> G[500];
        for(int i=1;i<=n;i++) {cin>>arr[i].second;arr[i].first=i;}
        for(int i=1;i<n;i++){
            int a,b;
            cin>>a>>b;
            G[a].push_back(b);
            G[b].push_back(a);
        }
        //if(n==1){cout<<"1";continue;}
        sort(arr+1,arr+n+1,ops);
        //for(int i=1;i<=n;i++) cout<<arr[i].first<<" "<<arr[i].second<<" ";
        for(int i=1;i<=n;i++){
            int ind=1;
            int x=arr[ind].first;
            bool flag=0;
            while(1){
                x=arr[ind].first;
                //cout<<x<<" ";
                flag=0;
                for(int j=0;j<G[i].size();j++){
                    if(G[i][j]==x){flag=1;break;}
                }
                if(flag==0 && x!=i) break;
        //        cout<<ind<<endl;
                ind++;
            }
            cout<<x<<" ";
        }
        cout<<endl;
	}
	return 0;
}
