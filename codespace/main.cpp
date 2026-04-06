/**
    @author: Azer Asalnov
*/

#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using ll = long long;
// using namespace __gnu_pbds;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef vector<ll> vec_ll;
// typedef tree<int, null_type, less<int>, rb_tree_tag,
//              tree_order_statistics_node_update> indexed_set;

const ll mod = 1e9 + 7;
const ll inf = 1e18;

void solve() {
    ll n, a, b; 
    string s; 
    cin >> n >> a >> b >> s; 

    ll all = 0, cnt_b = 0; 
    
    for (char c : s) {
        if (c == 'a') {
            if (all < a + b) {  
                cout << "Yes\n"; 
                all++;
            }  else {
                cout << "No\n"; 
            }
        } else if (c == 'b') {
            if (all < a + b && cnt_b < b) {
                cout << "Yes\n";
                all++;
                cnt_b++;
            } else {
                cout << "No\n"; 
            }
        } else {
            cout << "No\n"; 
        }

    }
    return; 
}

int main() {
    fast_io;

    int t = 1;
    // cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}
