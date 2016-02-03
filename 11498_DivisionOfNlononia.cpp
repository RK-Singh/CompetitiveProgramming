#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	int k, n, m;
	do {
		cin >> k;
		cin >> n >> m;
		int p, q;
		for (int i = 0; i < k; i++) {
			cin >> p >> q;
			if (p == n || q == m) {
				cout << "divisa\n";
			} else if (p > n && q > m) {
				cout << "NE\n";
			} else if (p > n && q < m) {
				cout << "SE\n";
			} else if (p < n && q < m) {
				cout << "SO\n";
			} else if (p < n && q > m) {
				cout << "NO\n";
			}
		}
	} while (k);
	return 0;
}

