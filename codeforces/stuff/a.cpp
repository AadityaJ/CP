#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

const int MAXN = 10005;
const int MAXM = 25;

int Tn, ret, a[MAXN][MAXM], f[MAXN][MAXM], n,m;

int main(int argc, const char * argv[]) {
    cin >> n >> m;
    //assert(1 <= n && n <= 70);
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
            assert(1 <= a[i][j] && a[i][j] <= 1000000000);
        }
    ret = 0;

    /*
     Preprocess for calculation XOR on a submatrix fast.
     */

    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            f[i][j] = f[i - 1][j] ^ f[i][j - 1]  ^ f[i - 1][j - 1] ^ a[i][j];

    /*
     Brute-force all the possible submatrices and get the best one.
     */

    for(int x1 = 1; x1 <= n; x1++)
        for(int y1 = 1; y1 <= n; y1++)
            for(int x2 = x1; x2 <= m; x2++)
                for(int y2 = y1; y2 <= m; y2++)
                    ret = max(ret, f[x2][y2] ^ f[x1 - 1][y2] ^ f[x2][y1 - 1] ^ f[x1 - 1][y1 - 1]);

    cout << ret;
    return 0;
}
