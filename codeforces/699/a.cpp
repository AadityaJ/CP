#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    string str;
    int min=INT_MAX;
    cin>>n;
    cin>>str;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<str.length()-1;i++){
        if(str[i]=='R'&&str[i+1]=='L'){
            int a=(arr[i+1]-arr[i])/2;
            min=(min>a)?a:min;
        }
    }
    if(min==INT_MAX) cout<<-1;
    else cout<<min;
	return 0;
}
