#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll fast_pow(int a , int b){
    if(!b)
        return 1;
    ll ret=fast_pow(a,b/2);
    return (b & 1 ? ret*ret*a: ret*ret);
}

ll gcd(ll a, ll b)
{
    if (a == 0) return b;
    gcd(b%a, a);
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
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

const ll x=10000001;
bool prime[x+1];
void sieve (){
    memset(prime , true , sizeof(prime));
    prime[0]=prime[1]=0;
    for(ll i=2 ; i*i<=x ; i++)
    {
        if(prime[i])
        {
            for(ll j=i*i ; j<=x ; j+=i)
                prime[j]=false;
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

int main()
{
    
    return 0;
}
