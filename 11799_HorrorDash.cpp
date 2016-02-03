#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	int T, N, ans;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> N;
		ans = -1;
		int el;
		for (int n = 0; n < N; n++) {
			cin >> el;
			if (el > ans) {
				ans = el;
			}
		}
		cout<<"Case "<<t<<": "<<ans<<"\n";
	}
	return 0;
}
