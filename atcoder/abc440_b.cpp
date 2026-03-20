// printHellworld - Azer Aslanov
#include <bits/stdc++.h> 

#define ll long long 

using namespace std; 

void solve() 
{
	ll n; 
	cin >> n; 

	vector<ll> a(n), b(n); 
	for (ll i = 0; i < n; i++) 
	{
		cin >> a[i]; 
		b[i] = a[i]; 
	} 

	sort(a.begin(), a.end()); 

	ll f = a[0]; 
	ll s = a[1]; 
	ll t = a[2]; 

	for (ll i = 0; i < n; i++) 
	{
		if (b[i] == f) cout << i + 1 << " "; 
	} 

	for (ll i = 0; i < n; i++) 
	{
		if (b[i] == s) cout << i + 1 << " "; 
	} 

	for (ll i = 0; i < n; i++)
	{
		if (b[i] == t) cout << i + 1 << "\n"; 
	}
} 

int main() 
{
	solve(); 

	return (0); 
} 
