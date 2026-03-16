#include <bits/stdc++.h> 

using namespace std; 

#define ll long long 

void solve() 
{
	ll n, m, k, ans = 0; 
	cin >> n >> m >> k; 

	vector<ll> a(n); 
        vector<ll> b(m); 	

	for (ll i = 0; i < n; i++) 
	{
		cin >> a[i]; 
	} 

	for (ll i = 0; i < m; i++) 
	{
		cin >> b[i]; 
	} 
	
	sort(a.begin(), a.end()); 
	sort(b.begin(), b.end()); 

	ll i = 0; // a 
	ll j = 0; // b 
	
	while (i < n and j < m) 
	{
		if (abs(a[i] - b[j]) <= k) 
		{
			ans++; 
			i++; 
			j++;
		} 
		else if (a[i] < b[j]) 
		{
			i++; 
		} 
		else
		{
			j++; 
		} 
	}	

	cout << ans << "\n"; 

	return; 
} 

int main() 
{
	// Azer Aslanov 
	
	solve(); 
	
	return 0; 
} 
