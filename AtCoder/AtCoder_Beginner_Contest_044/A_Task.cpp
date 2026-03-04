#include <bits/stdc++.h> 

#define ll long long 
#define pb push_back 

using namespace std; 

void solve()
{
	ll n, k, x = 1, y = 1;
	cin >> n >> k >> x >> y; 
	 
	if (n - k < 0) 
	{
		cout << n * x << "\n"; 
		return; 
	} 

	cout << (k * x) + ((n - k) * y) << "\n"; 

	return; 
} 

int main() 
{
	// Author: Azer Aslanov 

	solve(); 

	return 0; 
} 
