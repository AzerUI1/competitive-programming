/*
Given three arrays a,ba,b and cc, each consisting of nn integers. Find the number of triplets (ai,bj,ck)(ai​,bj​,ck​) such that the inequality ai<bj<ckai​<bj​<ck​ holds.
*/

/**
    @author: Azer Asalnov
*/

#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using ll = long long;
using vec_ll = vector<ll>;
// using namespace __gnu_pbds;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

// typedef tree<int, null_type, less<int>, rb_tree_tag,
//              tree_order_statistics_node_update> indexed_set;

const ll mod = 1e9 + 7;
const ll inf = 1e18;


void solve_case() {
    ll n, ans = 0;
    cin >> n;

    vec_ll a(n), b(n), c(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) cin >> b[i];
    for (ll i = 0; i < n; i++) cin >> c[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    for (ll i = 0; i < n; i++) {
        ll count_a = upper_bound(a.begin(), a.end(), b[i] - 1) - a.begin();
        ll count_c = c.end() - upper_bound(c.begin(), c.end(), b[i]);
        ans += count_a * count_c;
    }
    cout << ans << "\n";

    return;
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