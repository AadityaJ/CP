//http://www.spoj.com/problems/STPAR/
#include <iostream>
#include <stack>
using namespace std;
//logic : keep a lookout for number . push else into stack
int main(int argc, char const *argv[])
{
	
	while(1){
		stack<int> mys;
		int num;
		int arr[1001];
		int sor[1001];
		cin>>num;
		if(!num) break;
		for(int i=0;i<num;i++) {cin>>arr[i];}
		bool res = 0;
		//res = 1 => no else yes
		//lets get going
		int no=1;
		int p=0;
		for(int i=0;i<num;i++){
			if(arr[i]==no){sor[p++]=arr[i];no++;}
			else {
				if(mys.top()=no && !mys.empty()){
					sor[p++]=mys.top();
					mys.pop();
				}
				mys.push(arr[i]);
			}
		}
		while(!mys.empty()){
			sor[p++]=mys.top();
			mys.pop();
		}
		// is sor sorted
		for(int i=0;i<num;i++){
			if(sor[i]!=(i+1)) res=1;
		}
		if(res) cout<<"no \n";
		else cout<<"yes \n";
	}

	return 0;
}