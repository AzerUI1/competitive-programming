#include <bits/stdc++.h> 

#define ll long long 
#define pb push_back 

using namespace std; 

void solve()
{
	string s; 
	cin >> s; 

	map<char, ll> m; 

	for (char c : s) 
	{
		m[c]++; 
	} 
	
	// bool ok = true; 
	
	for (auto c : m) 
	{
		if (c.second % 2 != 0) // value = m[c] 
		{
			cout << "No\n";
		        return; 	
		} 
	} 

	cout << "Yes\n"; 
	
	return; 
} 

int main() 
{
	// Author: Azer Aslanov 

	solve(); 

	return 0; 
} 


