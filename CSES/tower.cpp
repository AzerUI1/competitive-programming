#include <bits/stdc++.h>
using namespace std;

void solve(int n, int from, int to) {
	if (n == 0) {
		return;
	}
	int OTHER = 6 - from - to;
	solve(n-1, from, OTHER);
	cout << from << " " << to << "\n";
	solve(n-1, OTHER, to);
}

int main() {
	int n;
	cin >> n;
	cout << (1 << n) - 1 << "\n";
	solve(n, 1, 3);
}
