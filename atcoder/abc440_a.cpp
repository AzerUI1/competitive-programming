/*
	Author: Azer Aslanov
*/ 

#include <bits/stdc++.h> 

#define ll long long 
#define pb(x) push_back(x); 

using namespace std; 

void solve() 
{
	ll x, y;
	cin >> x >> y; 

	ll power = pow(2, y); 
	ll ans = x * power; 

	cout << ans << "\n"; 
} 

int main() 
{
	solve(); 
	
	return (0); 
} 
