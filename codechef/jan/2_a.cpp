#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
        int arr[n+1];
        vector<int> G[500];
        for(int i=1;i<=n;i++) cin>>arr[i];
        for(int i=1;i<n;i++){
            int a,b;
            cin>>a>>b;
            G[a].push_back(b);
            G[b].push_back(a);
        }
        if(n==1){cout<<"yes";continue;}
        sort(arr,arr+n+1);
        //for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
        for(int i=1;i<=n;i++){
            int x=n;
            bool flag=0;
            while(1){
                flag=0;
                for(int j=0;j<G[i].size();j++){
                    if(G[i][j]==x){flag=1;break;}
                }
                if(flag==0 && x!=i) break;
                x--;
            }
            cout<<x<<" ";
        }
        cout<<endl;
	}
	 return 0;
}
