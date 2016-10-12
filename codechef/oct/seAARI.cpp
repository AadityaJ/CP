#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    //lets see if this works
    int n,k,d;
    cin>>n>>k>>d;
    int arr[n];
    int avg_diff=0;
    int last=0;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr[i]=temp;
        avg_diff+=(temp-last);
        last=temp;
    }
    avg_diff/=n;
    cout<<arr[0]<<" "<<avg_diff<<endl;
    // now lets see about the swaps
    cout<<"-1";
    return 0;
}
