/**
  * @authr: Azer Aslanov;
*/

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);

#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int,int>
#define pll pair<long long,long long>
#define vi vector<int>
#define vll vector<long long>
#define vb vector<bool>
#define vpi vector<pair<int,int>>
#define vpll vector<pair<long long,long long>>

#define rep(i,a,b) for (int i = (a); i < (b); i++)
#define rrep(i,a,b) for (int i = (a); i >= (b); i--)
#define each(x,a) for (auto &x : a)

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

const ll INF = 9e18;
const int MOD = 1000000007;
const int MOD2 = 998244353;

#define bitcount(x) __builtin_popcount(x)
#define bitcountll(x) __builtin_popcountll(x)
#define clz(x) __builtin_clz(x)
#define clzll(x) __builtin_clzll(x)
#define ctz(x) __builtin_ctz(x)
#define ctzll(x) __builtin_ctzll(x)

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl
#else
#define debug(x)
#endif

ll power(ll a, ll b, ll mod = MOD) {
    ll r = 1;
    while (b) {
        if (b & 1) r = (r * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return r;
}

ll gcdll(ll a, ll b) { return b == 0 ? a : gcdll(b, a % b); }
ll lcmll(ll a, ll b) { return a / gcdll(a, b) * b; }

string square_string(string s) {
    int n = s.size();
    vector<int> res(2*n, 0);

    reverse(s.begin(), s.end());

    for (int i = 0; i < n; i++) {
        int a = s[i] - '0';
        for (int j = 0; j < n; j++) {
            int b = s[j] - '0';
            res[i + j] += a * b;
        }
    }


    for (int i = 0; i < 2*n; i++) {
        if (res[i] >= 10) {
            res[i+1] += res[i] / 10;
            res[i] %= 10;
        }
    }

    int i = 2*n - 1;
    while (i > 0 && res[i] == 0) i--;

    string ans = "";
    while (i >= 0) {
        ans += char(res[i] + '0');
        i--;
    }

    return ans;
}

bool cmp(pair<string, int>& a, pair<string, int>& b) { 
    return a.second < b.second; 
} 

void sort(map<string, int>& M) { 

    vector<pair<string, int>> A; 
    
    for (auto& it : M) { 
        A.push_back(it); 
    } 

    sort(A.begin(), A.end(), cmp); 

    for (auto& it : A) { 

        cout << it.first << ' ' << it.second << endl; 
    } 
} 

void solve() {
    
}

int main() {
    FAST; 
    ll t; cin >> t; 
    while (t--) {
        solve(); 
    } 
    return 0; 
}
