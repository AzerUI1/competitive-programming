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

  while (b) 
  {
    if (b & 1) r = (r * a) % mod;
    
    a = (a * a) % mod;
    b >>= 1;
  }
  
  return r;
}

ll gcdll(ll a, ll b) { return b == 0 ? a : gcdll(b, a % b); }
ll lcmll(ll a, ll b) { return a / gcdll(a, b) * b; }

void solve() 
{
	string s; 
	cin >> s; 
	
	ll n = s.size(); 

	string type = ""; 
	type += s[n - 1]; 
	type += s[n - 2]; 
	
	reverse(all(type)); 
	// cout << type << "\n"; 

	if (type == "AM") 
	{ 
		string hh = s.substr(0, 2); 
		
		if (hh == "12") 
		{
			s[0] = '0'; 
			s[1] = '0'; 
		} 
		
		s.pop_back(); 
		s.pop_back(); 

		cout << s << "\n"; 
	} 	
	else
	{
		string hh = s.substr(0, 2); 
		// cout << hh << "\n"; 

		if (hh == "12")
		{
			s.pop_back(); 
			s.pop_back(); 

			cout << s << "\n"; 
		} 
		else
		{
			ll hour = stoll(hh);
			ll new_hour = hour + 12; 

			string new_hh = to_string(new_hour);
		        // cout << new_hh << "\n"; 	

			s[0] = new_hh[0]; 
			s[1] = new_hh[1]; 
			
			s.pop_back(); 
			s.pop_back(); 	
			
			cout << s << "\n"; 
		}		
	} 	

	return; 
}

int main() 
{
	FAST;
  
	solve(); 

	return 0;
}

