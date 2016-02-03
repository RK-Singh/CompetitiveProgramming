#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int T, N, el, mile, juice;
	vector<int> durations;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> N;
		durations.clear();
		for (int n = 0; n < N; n++) {
			cin >> el;
			durations.push_back(el);
		}
		mile = 0;
		juice = 0;
		for (auto d : durations) {
			mile += ((d / 30) + 1) * 10;
			juice += ((d / 60) + 1) * 15;
		}
		if (mile < juice) {
			cout << "Case " << t << ": " << "Mile " << mile << "\n";
		} else if (mile > juice) {
			cout << "Case " << t << ": " << "Juice " << juice << "\n";
		} else if (mile == juice) {
			cout << "Case " << t << ": " << "Mile Juice " << mile << "\n";
		}
	}
	return 0;
}
