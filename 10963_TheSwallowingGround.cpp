#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int T, W, y1, y2, diff;
	cin >> T;
	while (T--) {
		bool valid = true;
		cin >> W;
		cin >> y1 >> y2;
		diff = abs(y1 - y2);
		for (int i = 1; i < W; i++) {
			cin >> y1 >> y2;
			if (diff != abs(y1 - y2)) {
				valid = false;
			}
		}
		if (valid) {
			cout << "yes\n";
		} else {
			cout << "no\n";
		}
		/* print a line between test cases but not last */
		if (T) {
			cout << "\n";
		}
	}
	return 0;
}
