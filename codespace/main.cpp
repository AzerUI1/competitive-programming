/**
    @author: Azer Asalnov
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using ll = long long;
using vec_ll = vector<ll>;
using namespace __gnu_pbds;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update> indexed_set;

const ll mod = 1e9 + 7;
const ll inf = 1e18;

typedef struct node {
    long long val;
    struct node* next;
    struct node* prev;
} node;

void solve_case() {
    ll n;
    cin >> n;

    vec_ll arr(n);
    for (ll i = 0; i < n; i++) cin >> arr[i];

    if (n == 0) {
        cout << 0 << " " << 0;
        return;
    }

    if (n == 1) {
        cout << 1 << " " << 0 << "\n";
        return;
    }

    if (n == 2) {
        cout << 1 << " " << 1 << "\n";
        return;
    }

    ll i = 0, j = n - 1;
    int alice_cnt = 0, bob_cnt = 0;
    ll alice = arr[i] + 1, bob = arr[j] + 1;

    while (i < j) {
        alice--;
        bob--;

        if (alice == 0) {
            alice_cnt++;

            if (i + 1 == j) {
                goto next;
                break;
            }
            i++;
            alice = arr[i];
        }

        next:
        if (bob == 0) {
            bob_cnt++;

            if (j - 1 == i) {
                break;
            }
            j--;
            bob = arr[j];
        }
    }
    if (alice_cnt + bob_cnt < n) alice_cnt++;

    cout << alice_cnt << " " << bob_cnt << endl;

    return;
}

signed main() {
    fast_io;

    int test_cases = 1;
    // cin >> test_cases;
    while (test_cases--) {
        solve_case();
    }

    return 0;
}