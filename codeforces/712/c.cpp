#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int x,y;
	cin>>x>>y;
	int arr[3];
	arr[0]=arr[1]=arr[2]=y;
	int turn=0,step=0;
	while(!(arr[0]>=x&&arr[1]>=x&&arr[2]>=x)){
		int val=arr[0]+arr[1]+arr[2]-arr[turn]-1;
		arr[turn]=val;
		turn=(turn+1)%3;
		step++;
	}
	/*int a,b,c;
	a=b=c=y;
	int turn=0,step=0;
	while(1){
		if(a>=x&&b>=x&&c>=x){cout<<step<<endl;break;}
		step++;
		if(turn==0){
			a=b+c-1;
		}
		else if(turn==1){
			b=a+c-1;
		}
		else c=a+b-1;
		turn=(turn+1)%3;
	}*/
	cout<<step;
	return 0;
}
