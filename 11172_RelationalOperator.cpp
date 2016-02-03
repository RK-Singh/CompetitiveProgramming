#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	int t, n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		if (n == m) {
			cout << "=\n";
		} else if (n < m) {
			cout << "<\n";
		} else {
			cout << ">\n";
		}
	}
	return 0;
}

