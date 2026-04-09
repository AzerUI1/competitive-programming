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

using vec_ll = vector<ll>;
// typedef tree<int, null_type, less<int>, rb_tree_tag,
//              tree_order_statistics_node_update> indexed_set;

const ll mod = 1e9 + 7;
const ll inf = 1e18;

void solve_case() {
    ll d, n;
    cin >> d >> n;

    ll power = 1;
    for (ll i = 0; i < d; i++) {
        power *= 100;
    }

    ll base = (n == 100 ? 101 : n);
    cout << base * power << "\n";
}

int main() {
    fast_io;

    int test_cases = 1;
    // cin >> test_cases;
    while (test_cases--) {
        solve_case();
    }

    return 0;
}
