#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    set<int> bad;   
    for (int i = 0; i < K; i++) {
        int d;
        cin >> d;
        bad.insert(d);
    }

    int x = N;

    while (true) {
        int temp = x;
        bool ok = true;

        if (temp == 0 && bad.count(0)) ok = false;

        while (temp > 0) {
            if (bad.count(temp % 10)) {
                ok = false;
                break;
            }
            temp /= 10;
        }

        if (ok) {
            cout << x << endl;
            break;
        }

        x++;
    }
}
