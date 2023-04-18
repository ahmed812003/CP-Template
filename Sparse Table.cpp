#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fast()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

const int N = 1e5 + 5 , bits = 27 , inf = 1e9 + 9;
ll table[bits][N] , a[N] , LOG[N];

ll merge (ll x, ll y) {
    return min(x , y);
}
//O(1) There is no effect of overlap (min , max , gcd , lcm)
void lastBit() {
    for (int i = 2; i < N ; ++i) {
        LOG[i] = LOG[i >> 1] + 1;
    }
}
ll optimalQuery(int l , int r) {
    if (r < l)swap(l , r);
    int msk = LOG[r - l + 1];
    return merge(
               table[msk][l],
               table[msk][r - (1 << msk) + 1]
           );

}
// O(log) There is effect of overlap (sum , sub , mul , xor)
ll query(int l , int r) {
    if (r < l) swap(l , r);
    int length = r - l + 1;
    ll ans = 0;
    for (int i = 0 ; i < bits ; i++) {
        if (length & (1 << i)) {
            ans = merge(
                      ans,
                      table[i][l]
                  );
            l += (1 << i);
        }
    }
    return ans;
}

void buildTable (int size) {
    for (int i = 0 ; i < size ; i++) {
        table[0][i] = a[i];
    }
    for (int mask = 1 ; mask <= bits ; mask++) {
        for (int i = 0 ; i + (1 << mask) <= size ; i++) {
            table[mask][i] = merge(
                                 table[mask - 1][i], // start from i with size/2;
                                 table[mask - 1][i + (1 << (mask - 1))] // start from i+(size/2)  with size/2
                             );
        }
    }
}

int main()
{
    fast();
    return 0;
}
