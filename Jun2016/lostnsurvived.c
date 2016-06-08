//http://www.spoj.com/problems/LOSTNSURVIVED/
//same as hackearth - problem campers
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define pf pop_front
#define IOS ios::sync_with_stdio(false)
int dsu[100005];
int sz[100005];
int  n , k ;
set <pii> present;
int Find(int a){
	if(dsu[a]==a)return a;return dsu[a]=Find(dsu[a]);
}
void Union(int a , int b){
    int root_a = Find(a);
    int root_b = Find(b);
    if(root_a==root_b)return ;
    present.erase(present.find(mp(sz[root_b],root_b)));
    present.erase(present.find(mp(sz[root_a],root_a)));
    sz[root_a]+=sz[root_b];
    present.insert(mp(sz[root_a],root_a));
    dsu[root_b] = root_a;
}
 
set <int> s;
int main(){
 
 
	int i , j ;
    cin >> n >> k;
    for(i = 1 ; i <= n ; i++){
        dsu[i] = i;
        sz[i] = 1;
        present.insert(mp(1,i));
    }
    int x , y;
    for(i = 0 ; i < k ; i++){
        scanf("%d %d",&x,&y);
        Union(x,y);
        printf("%d\n", (*(present.rbegin())).ff - (*(present.begin())).ff );
    }
 
	return 0;
}