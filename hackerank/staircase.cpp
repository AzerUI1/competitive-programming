#include <bits/stdc++.h> 

#define ll long long 

using namespace std;

int main()
{
    ll n; 
    cin >> n; 
    
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 0; j < i; j++)
        {
            if (j == 0)
            {
                for (ll k = 0; k < n-i; k++)
                {
                    cout << " "; 
                }
            }
            cout << '#'; 
        }
        cout << "\n"; 
    }
}
