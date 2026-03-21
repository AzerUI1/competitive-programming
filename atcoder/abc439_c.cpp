/*
    Azer Aslanov - printHelloWorld
*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) (x).begin(), (x).end()
#define $HelloWorld$ ios::sync_with_stdio(false); cin.tie(nullptr);  

void solve() 
{
	ll n;
       	cin >> n; 
	
	vector<ll> a(n + 5, 0); 
	vector<ll> v; 

	for (ll i = 1; i * i <= n; i++) 
	{
		for (ll j = i + 1; i * i + j * j <= n; j++) 
		{
			ll k = i * i + j * j; 
			a[k]++; 
		} 
	} 	

	for (ll i = 1; i <= n; i++) 
	{
		if (v[i] == 1) 
		{
			b.push_back(v[i]);
		} 
	}

	cout << b.size() << "\n"; 

	for (ll i = 0; i < b.size(); i++) 
		cout << b[i] << " "; 
		
} 

signed main() 
{
    	$HelloWorld$ 
    	
	solve(); 

	return (0);
}
