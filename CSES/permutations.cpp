/** 
    * @authr: Azer Aslanov;
*/ 

#include <bits/stdc++.h>

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

ll power(ll a, ll b, ll mod = MOD) 
{
  ll r = 1;
  while (b) {
    if (b & 1)
      r = (r * a) % mod;
    a = (a * a) % mod;
    b >>= 1;
  }
  return r;
}

ll gcdll(ll a, ll b) { return b == 0 ? a : gcdll(b, a % b); }
ll lcmll(ll a, ll b) { return a / gcdll(a, b) * b; }

void solve() 
{
	ll n; 
	cin >> n; 
	
	if (n == 2)
	{
		cout << "NO SOLUTION\n"; 
		return; 
	} 
	else if (n == 3) 
	{
		cout << "NO SOLUTION\n"; 
		return; 
	} 
	else
	{
		goto elseSituation; 
	} 
	
	elseSituation:
	ll szEv = n / 2; 
	ll szOd = n - szEv; 

	vector<ll> even, odd; 
	ll ev = 2, od = 1; 

	for (ll i = 0; i < szEv; i++)
	{
		even.pb(ev); 
		ev += 2;	
	} 
	for (ll i = 0; i < szOd; i++) 
	{
		odd.pb(od); 
		od += 2; 
	}
		
	for (ll i = 0; i < even.size(); i++) 
	{ 
		cout << even[i] << " ";  
	} 
	for (ll i = 0; i < odd.size(); i++) 	
	{
		cout << odd[i]  << " "; 
	} 

	return; 
}

int main() 
{
  FAST;
  
  solve(); 

  return 0;
}
