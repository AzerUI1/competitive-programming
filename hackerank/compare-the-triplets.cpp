#include <bits/stdc++.h> 

#define ll long long 

using namespace std;

void solve()
{
    ll a[3];
    ll b[3];
    
    for (int i = 0; i < 3; i++) cin >> a[i]; 
    for (int i = 0; i < 3; i++) cin >> b[i]; 
    
    ll bob = 0, alice = 0; 
    
    for (ll i = 0; i < 3; i++) 
    {
        if (a[i] > b[i])
        {
            alice++; 
        }
        else if (b[i] > a[i]) 
        {
            bob++; 
        }
    }
    
    cout << alice << " " << bob << "\n"; 
    
    return;
}

int main() 
{ 
    solve(); 
        
    return 0; 
}

