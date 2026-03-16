#include <bits/stdc++.h> 

#define ll long long 

using namespace std;
 
void solve() 
{
	ll n; 
	cin >> n; 

	set<ll> s; 

	for (ll i = 0; i < n; i++) 
	{	
		ll x;
	 	cin >> x;
	 	
		s.insert(x); 	
	} 

	cout << s.size() << "\n"; 

	return; 
} 

int main() 
{
	// Aslanov Azer
	
	solve(); 
	
	return 0; 
} 
