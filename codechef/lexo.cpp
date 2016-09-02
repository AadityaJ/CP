#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        for(int i=0;i<str.length();i++){
            if(str[i]=='.' && i==(str.length()/2) && (str.length()%2)){
                str[i]='a';
            }
            else if(str[i]=='.'){
                str[i]=str[str.length()-i-1];
            }
            else if(str[i]!=str[str.length()-i-1]){str="-1";break;}
        }
        cout<<str<<endl;
    }
    return 0;
}
