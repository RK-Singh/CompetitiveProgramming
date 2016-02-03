#include <iostream>
#include<cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int a, b, ans;
	while (true) {
		cin >> a >> b;
		if (a == -1 && b == -1) {
			break;
		}
		ans = a > b ? a - b : b - a;
		if (ans > 50) {
			ans = 100 - ans;
		}
		cout << ans << "\n";
	}
	return 0;
}
