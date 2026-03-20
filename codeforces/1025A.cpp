/*
    printHelloWorld
*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;

#define SQ(a) (a) * (a) 
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,a,b) for (int i = (a); i <= (b); i++)
#define REP(i,n) for (int i = 0; i < (n); i++)
#define RFOR(i,a,b) for (int i = (a); i >= (b); i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define $HelloWorld$ ios::sync_with_stdio(false); cin.tie(nullptr); 

void solve() 
{
	ll n; 
	string s;
	
	cin >> n >> s; 
	
	if (n == 1) {cout << "Yes\n"; return;};

	set<char> st; 

	for (char c : s) 
	{
		st.insert(c);  
	} 

	ll size = (long long)(st.size()); 
	
	if (size < n) 
	{	
		cout << "Yes\n"; 
		return;
	} 

	cout << "No\n"; 

	return; 
} 

signed main() 
{
    	$HelloWorld$ 
    	
	solve(); 
	
	return (0);
}
