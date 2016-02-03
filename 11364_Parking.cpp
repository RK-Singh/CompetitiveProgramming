#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	int t, n, x;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> X;
		for (int i = 0; i < n; i++) {
			cin >> x;
			X.push_back(x);
		}
		int max = 0, min = 10000;
		for (int i = 0; i < n; i++) {
			if (X[i] > max) {
				max = X[i];
			}
			if (X[i] < min) {
				min = X[i];
			}
		}
		cout << (max - min) * 2 << "\n";
	}
	return 0;
}

