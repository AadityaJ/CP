// this will certainly not work
#include <iostream>
#include <vector>
#define MAX 1000000
using namespace std;
std::vector<bool> prime(1);
void createPrime(){
    for (int p=2; p*p<=MAX; p++){
    if (prime[p] == true)
    {
        for (int i=p*2; i<=MAX; i += p)
            prime[i] = false;
        }
    }
}
int main(int argc, char const *argv[]) {
    createPrime();
    int t;
    cin>>t;
    while(t--){
        
    }
    return 0;
}
