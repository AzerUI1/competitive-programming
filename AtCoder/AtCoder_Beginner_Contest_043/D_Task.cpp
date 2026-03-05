#include <iostream>
#include <string>

#define ll long long

using namespace std; 

void solve()
{
    string s;
    cin >> s; 
    
    ll n = s.length();

    bool found = false;
  
    for (ll i = 0; i < n - 1; i++) 
    {
        if (s[i] == s[i + 1]) 
        {  
            cout << i + 1 << " " << i + 2 << std::endl;
            found = true;
            break;
        }
        if (i + 2 < n && s[i] == s[i + 2]) 
        {  
            cout << i + 1 << " " << i + 3 << std::endl;
            found = true;
            break;
        }
    }

    if (!found) 
    {
        cout << -1 << " " << -1 << std::endl;
    }
}

int main() 
{
    solve(); 
    return 0;
}
