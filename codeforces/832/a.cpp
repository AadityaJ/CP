#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int l[105],r[105],n,lst;
bool vis[105];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>l[i]>>r[i];
	for(int i=1;i<=n;i++){
		if(!l[i]){
			int t=i;for(;r[t];t=r[t]);
			if(!lst)lst=t;
			else l[i]=lst,r[lst]=i,lst=t;
		}
	}
	for(int i=1;i<=n;i++)cout<<l[i]<<" "<<r[i];
	return 0;
}
