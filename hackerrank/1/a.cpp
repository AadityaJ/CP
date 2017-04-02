#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n;
    cin >> n;
    vector<int> file(n);
    for(int file_i = 0; file_i < n; file_i++){
       cin >> file[file_i];
    }
    int cnt=0,i=0;
	while(i<n){
		int v=file[i];
		i+=(v+1);
		cnt++;
	}
	//if(i==n) cnt--;
	cout<<cnt;
    return 0;
}
