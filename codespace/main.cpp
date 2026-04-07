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
    string a, b;
    cin >> a >> b;

    string ans = "";

    for (ll i = 0; i < max(a.size(), b.size()); i++) {
        ans += a[i];
        ans += b[i];
    }

    cout << ans << "\n";

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
