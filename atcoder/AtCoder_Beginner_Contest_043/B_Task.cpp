#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define del pop_back

using namespace std; 

void solve()
{
    string s;
    cin >> s;  
    
    vector<char> ans; 
    ll n = s.size(); 
    
    for (ll i = 0; i < n; i++)
    {
        if (s[i] != 'B')
        {
            ans.pb(s[i]);  
        }
        else
        {
            if(ans.size() != 0) 
            {
                ans.pop_back();
            }
        }
    }   
    
    for (ll i = 0; i < ans.size(); i++) 
    {
        cout << ans[i]; 
    }
    
    return; 
}

int main() 
{
    // Azer Aslanov
    
    solve(); 
    
    return 0; 
}
