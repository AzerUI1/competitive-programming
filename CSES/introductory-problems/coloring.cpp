#include <bits/stdc++.h>
using namespace std;

int main() {
	int H, W; 
	cin >> H >> W;
	vector<string> a(H);
	for (string& row : a) {
		cin >> row;
	}
	for (int row = 0; row < H; row++) {
		for (int col = 0; col < W; col++) {
			if ((row + col) % 2 == 0) {
				a[row][col] = (a[row][col] == 'A' ? 'C' : 'A');
			}
			else {
				a[row][col] = (a[row][col] == 'B' ? 'D' : 'B');
      }
		}
		cout << a[row] << "\n";
	}
}
