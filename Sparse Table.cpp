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
ll table [bits][N] , arr[N];

ll merge (ll x, ll y) {
    return min(x , y);
}

ll query(int l , int r) {
    int length = r - l + 1;
    ll ret = INT_MAX;
    for (int i = 0 ; i <= bits ; i++) {
        if (length & (1 << i)) {
            ret = merge(
                      ret,
                      table[i][l]
                  );
            l += (1 << i);
        }
    }
    return ret;
}

void bulit (int size) {
    for (int i = 0 ; i < size ; i++) {
        table[0][i] = arr[i];
    }
    for (int mask = 1 ; mask <= bits ; mask++) {
        for (int i = 0 ; i + (1 << mask) <= size ; i++) {
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