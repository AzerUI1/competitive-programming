#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double

#define pii pair<int, int>
#define pll pair<ll, ll>

#define vi vector<int>
#define vll vector<ll>
#define vvll vector<vll>

#define pb push_back
#define eb emplace_back

#define ff first
#define ss second

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, a, b) for (int i = (a); i <= (b); i++)
#define per(i, n) for (int i = (n) - 1; i >= 0; i--)

const int INF = 1000000000;
const ll LINF = (ll)4e18;
const int MOD = 1000000007;
const ll MOD2 = 998244353;
const ld EPS = 1e-9;
const ld PI = acos(-1.0);

template <class T>
bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return true;
    }
    return false;
}

template <class T>
bool chmax(T &a, const T &b) {
    if (b > a) {
        a = b;
        return true;
    }
    return false;
}

template <class T>
T gcd_ext(T a, T b) {
    return b == 0 ? a : gcd_ext(b, a % b);
}

template <class T>
T lcm_ext(T a, T b) {
    return a / gcd_ext(a, b) * b;
}

template <class T>
T power(T a, T b) {
    T r = 1;
    while (b > 0) {
        if (b & 1) r *= a;
        a *= a;
        b >>= 1;
    }
    return r;
}

template <class T>
T modpow(T a, T b, T mod) {
    a %= mod;
    T r = 1;
    while (b > 0) {
        if (b & 1) r = (r * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return r;
}

template <class T>
void read(vector<T> &v) {
    for (auto &x : v) cin >> x;
}

void solve() {

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
