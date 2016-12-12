//
#include <iostream>
#include <iostream>
#include <vector>
using namespace std;
int CeilIndex(std::vector<int> &v, int l, int r, int key) {
    while (r-l > 1) {
    int m = l + (r-l)/2;
    if (v[m] >= key)
        r = m;
    else
        l = m;
    }

    return r;
}

int LongestIncreasingSubsequenceLength(std::vector<int> &v) {
    if (v.size() == 0)
        return 0;

    std::vector<int> tail(v.size(), 0);
    int length = 1; // always points empty slot in tail

    tail[0] = v[0];
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] < tail[0])
            // new smallest value
            tail[0] = v[i];
        else if (v[i] > tail[length-1])
            // v[i] extends largest subsequence
            tail[length++] = v[i];
        else
            // v[i] will become end candidate of an existing subsequence or
            // Throw away larger elements in all LIS, to make room for upcoming grater elements than v[i]
            // (and also, v[i] would have already appeared in one of LIS, identify the location and replace it)
            tail[CeilIndex(tail, -1, length-1, v[i])] = v[i];
    }

    return length;
}
int lis(int *arr,int start,int end){
    std::vector<int> v((end-start+1));
    int x=0;
    //for(int i=start;i<=end;i++)
    //    cout<<arr[i]<<" ";
    for(int i=start;i<=end;i++){
        v[x]=arr[i];
        x++;
    }
    //for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    return LongestIncreasingSubsequenceLength(v);
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n+1];
        for(int i=1;i<=n;i++) cin>>arr[i];
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            cout<<lis(arr,x,y)<<endl;
        }
    }
    return 0;
}
