#include <bits/stdc++.h> 
#define ll long long
using namespace std;

int main() 
{
    ll n; 
    cin >> n; 
    
    ll a[n][n]; 
    
    for (ll i = 0; i < n; i++) 
    {
        for (ll j = 0; j < n; j++) 
        {
            cin >> a[i][j]; 
        }
    }
    
    ll ans = 0; 
    ll sum1 = 0; 
    ll sum2  = 0; 
    
    for (ll i = 0; i < n; i++) 
    {
        for (ll j = 0; j < n; j++) 
        {
            if (i == j)
            {
                sum1 += a[i][j]; 
            }
        }
    }
    
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                sum2 += a[i][j]; 
            }
        }
    }
    
    ans = abs(sum1 - sum2); 
    
    cout << ans << "\n"; 
}



