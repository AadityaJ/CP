#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool exists(vector <int> a, int val) {
    if(find(a.begin(), a.end(), val) != a.end())
        return true;
    return false;
}

bool knowsAll(vector <int> person, vector <int> people) {
    bool knows = true;
    for(int i = 0; i < people.size() && knows; i++)
        if(!exists(person, people[i]))
            knows = false;
    return knows;
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;
        if(m==0 && (n>2)){cout<<"NO"<<endl;continue;}
        if(m==0 && (n<=2)){cout<<"YES"<<endl;continue;}
        vector <int> table1;
        vector <int> table2;
        vector <int> graph[n+1];
        for(int j = 0; j < m; j++) {
            int x, y;
            cin >> x >> y;
            graph[x - 1].push_back(y - 1);
            graph[y - 1].push_back(x - 1);
        }
        // if there exists one node which is isolated , check
        bool fl=false;
        /*for(int i=0;i<n;i++){
            if(graph[i].size()==0) {fl=1;break;}
        }
        if(fl){cout<<"NO\n";continue;}*/
        bool flag = true;
        for(int j = 0; j < n && flag; j++) {
            bool k_t1 = knowsAll(graph[j], table1);
            if(k_t1) {
                table1.push_back(j);
                continue;
            }
            bool k_t2 = knowsAll(graph[j], table2);
            if(k_t2) {
                table2.push_back(j);
                continue;
            }
            flag = false;
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
