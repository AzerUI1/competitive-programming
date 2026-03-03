#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define del pop_back
#define ff first
#define ss second

using namespace std; 

void solve()
{
    int n; 
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    bool all_equal = true;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            all_equal = false;
            break;
        }
    }
    if (all_equal)
    {
        cout << 0 << endl;
        return;
    }

    ll ans = LLONG_MAX;
    for (int m = -100; m <= 100; m++) 
    {
        ll cost = 0;
        for (int i = 0; i < n; i++)
        {
            cost += (a[i] - m) * (a[i] - m);
        }
        ans = min(ans, cost);
    }

    cout << ans << endl;
}


int main() 
{
    // Azer Aslanov

    solve(); 

    return 0; 
}
