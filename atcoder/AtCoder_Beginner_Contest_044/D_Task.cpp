/** 
    * @authr: Azer Aslanov;
*/ 

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <climits>

using namespace std;

#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);

#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vb vector<bool>
#define vpi vector<pair<int, int>>
#define vpll vector<pair<long long, long long>>

#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (b); i--)
#define each(x, a) for (auto &x : a)

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

const int MOD = 1000000007;
const int MOD2 = 998244353;
const ll INF = 9e18;

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl
#else
#define debug(x)
#endif

ll f(ll b, ll n) 
{
    ll res = 0;
    while (n > 0) 
    {
        res += n % b;
        n /= b;
    }
    return res;
}

void solve() 
{
    ll n, s;
    cin >> n >> s;

    if (n == s) 
    {
        cout << n + 1 << "\n";
        return;
    }

    if (s > n) 
    {
        cout << -1 << "\n";
        return;
    }

    ll ans = INF;

    rep(b, 2, sqrt(n) + 2)
    {
        if (f(b, n) == s) ans = min(ans, b);
    }

    rep(p, 1, sqrt(n) + 2)
    {
        ll b = (n - s) / p + 1;
        if (b >= 2 && f(b, n) == s) ans = min(ans, b);
    }

    if (ans == INF) cout << -1 << "\n";
    else cout << ans << "\n";
}

int main() 
{
    FAST;
    solve();
}
