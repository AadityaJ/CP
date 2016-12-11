//
#include <iostream>
#include <iostream>
#include <vector>
using namespace std;
// Binary search (note boundaries in the caller)
int CeilIndex(int *v, int l, int r, int key) {
    while (r-l > 1) {
    int m = l + (r-l)/2;
    if (v[m] >= key)
        r = m;
    else
        l = m;
    }

    return r;
}

int lis(int *v,int start,int end) {
    if (start==end)
        return 0;

    //std::vector<int> tail(end-start, 0);
    int tail[end-start];
    int length = 1; // always points empty slot in tail

    tail[0] = v[0];
    for (int i = start; i < end; i++) {
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

int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            cout<<lis(arr,y,x-1)<<endl;
        }
    }
    return 0;
}
