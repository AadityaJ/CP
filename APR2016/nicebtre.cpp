//http://www.spoj.com/problems/NICEBTRE/
#include <iostream>
// required help :( idk why
using namespace std;
int i;
char s[1001];
int rec(){
	if (s[i++] =='l')
             return 1;
        else
            return max(rec(),rec())+1;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		i=0;
		cin>>s;
		cout<<(rec()-1)<<endl;
	}
	return 0;
}