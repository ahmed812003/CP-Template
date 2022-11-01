#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fast()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

const int N = 2e5 + 7 , bits = 27;
ll table [bits][N] , arr[N] , LOG[N];;

ll merge (ll x, ll y) {
    return max(x , y);
}

ll query(int l, int r) {
    if (l == r)return 0;
    if (r < l)swap(l, r);
    int msk = LOG[r - l + 1];
    return max(
               table[msk][l],
               table[msk][r - (1 << msk) + 1]
           );

}

void bulit (int size) {
    for (int i = 1 ; i <= size ; i++) {
        table[0][i] = arr[i];
        LOG[i + 1] = LOG[(i + 1) >> 1] + 1;
    }
    for (int mask = 1 ; mask <= bits ; mask++) {
        for (int i = 1 ; i + (1 << mask) - 1 <= size ; i++) {
            table[mask][i] = merge(
                                 table[mask - 1][i],
                                 table[mask - 1][i + (1 << (mask - 1))]
                             );
        }
    }
}

int main()
{
    fast();
    return 0;
}
