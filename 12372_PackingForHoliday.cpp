#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	int T, L, W, H;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> L >> W >> H;
		if (L <= 20 && W <= 20 && H <= 20) {
			cout << "Case " << t << ": good\n";
		} else {
			cout << "Case " << t << ": bad\n";
		}
	}
	return 0;
}

