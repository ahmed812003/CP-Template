#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll fast_pow(int a , int b){
    if(!b)
        return 1;
    ll ret=fast_pow(a,b/2);
    return (b & 1 ? ret*ret*a: ret*ret);
}

ll fast_pow(ll x , ll a , ll mod){
    if(a == 0) return 1;
    if(a == 1) return x;
    if(a % 2 == 0) return fast_pow((x*x)%mod, a/2 , mod);
    return (x*fast_pow((x*x)%mod, a/2 , mod))%mod;
}

ll gcd(ll a, ll b)
{
    if (a == 0) return b;
    gcd(b%a, a);
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

bool is_perfect_square(ll n){
    ll sq = sqrt(n);
    return sq * sq == n;
}

bool prime_check(ll x){
    if(x<=1)
        return false;
    for(ll i=2 ; i*i<=x;  i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

void prime_factors_sqrt(ll n) {
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                n /= i;
                cnt++;
            }
            cout << i << ' ' << cnt << endl;
        }
    }
    if (n > 1) {
        cout << n << ' ' << 1 << endl;
    }
}


void prime_factors(ll n) {
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                n /= i;
                cnt++;
            }
            cout << i << ' ' << cnt << endl;
        }
    }
}

vector < int > prime_factorization(ll n){
    vector < int > factors;
    while(n % 2 == 0) factors.push_back(2), n /= 2;
    for(int i = 3; i <= sqrt(n); i += 2)
        while(n % i == 0) factors.push_back(i), n /= i;
    if(n > 2) factors.push_back(n);
    return factors;
}


const int N = 1e6 + 6;
vector<bool> p;
void sieve() {
    const int N = 1e6 + 6;
    p.assign(N, true);
    p[0] = p[1] = false;
    for (int i = 2; i < N; i++) {
        if (p[i]) {
            for (int j = i + i; j < N; j += i) {
                p[j] = false;
            }
        }
    }
}

vector < ll > Get_Divisors(ll n){
    vector < ll > divisors;
    for(int i = 1; i < sqrt(n); i++)
        if(n % i == 0) divisors.push_back(i), divisors.push_back(n / i);
    if(sqrt(n) == int(sqrt(n))) divisors.push_back(sqrt(n));
    return divisors;
}

// Complications of the number 
for(int i=2 ; i<=m ; i++){
    bool ok=0;
    for(int j=i;j<=N;j+=i)
    {
        if(vis[j]) ok = 1;
    }
    if(ok)
    {
        for(int j=i;j<=N;j+=i)
            take[j] = 1;
    }
}

void Print_Permutation(vector < int >& nums){
    sort(all(nums));
    do {
        for(auto& i : nums)
            cout << i << " ";
        cout << "\n";
    } while(next_permutation(nums.begin(), nums.end()));
}

void Print_Permutation(string s){
    sort(all(s));
    do {
        cout << s << "\n";
    } while(next_permutation(s.begin(), s.end()));
}

bool is_triangle(ll a, ll b, ll c){
    return (a + b > c) && (a + c > b) && (b + c > a) && (a && b && c);
}

int main()
{
    
    return 0;
}
