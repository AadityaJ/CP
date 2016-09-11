#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string dump;
        getline(cin,dump);
        vector <string> data;
        std::vector<int> v;
        int bigcnt=0;
        for(int i=0;i<n;i++){
            string s;
            getline(cin,s);
            data.push_back(s);
            int count=0;
            bool ch[27]={0};
            for(int j=0;j<s.length();j++){
                if(s[j]>='A'&&s[j]<='Z'){
                    if(ch[s[j]-'A']==0){
                        count++;
                        ch[s[j]-'A']++;
                    }
                }
                if(bigcnt<=count){v.push_back(bigcnt);}
            }
        }
        
    }
    return 0;
}
