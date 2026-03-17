#include <bits/stdc++.h> 

#define ll long long 
long long ans = 0; 

using namespace std;

void solve() 
{
    ll n; 
    cin >> n; 
    
    vector<ll> a(n); 
    
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i]; 
        ans += a[i]; 
    }
    
    cout << ans << "\n"; 
    
    return; 
}

int main()
{
    solve(); 
    
    return 0;
}

