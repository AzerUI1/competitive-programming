#include <bits/stdc++.h> 

using namespace std; 

#define ll long long  


int main()
{
	ll n, m; 
	cin >> n >> m; 

	vector<ll> a(n); 


	for (ll i = 0; i < n; i++)
	{
		cin >> a[i]; 
	} 

	//sort(all(a)); 
	sort(a.rbegin(), a.rend()); 

	ll temp = m; 
	ll cnt = 0; 
	
	ll i = 0; 
	while (temp > 0)
	{
		temp -= a[i]; 
		i++; 
		cnt++;
	} 

	cout << cnt << "\n"; 
} 
