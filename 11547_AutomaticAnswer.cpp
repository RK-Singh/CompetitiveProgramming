#include <iostream>
#include<cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int ans = abs((((n * 567) / 9 + 7492) * 235) / 47 - 498);
		cout << (ans % 100) / 10 << "\n";
	}
	return 0;
}

