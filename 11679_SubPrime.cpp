#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int B, N, D, C, V;
	bool bailout;
	vector<int> R;
	while (true) {
		R.clear();
		R.push_back(0);
		cin >> B >> N;
		if (B == 0 && N == 0) {
			break;
		}
		int el;
		for (int i = 1; i <= B; i++) {
			cin >> el;
			R.push_back(el);
		}
		for (int i = 0; i < N; i++) {
			cin >> D >> C >> V;
			R[C] += V;
			R[D] -= V;
		}
		bailout = false;
		for (auto r : R) {
			if (r < 0) {
				bailout = true;
				break;
			}
		}
		if (bailout) {
			cout << "N\n";
		} else {
			cout << "S\n";
		}
	}
	return 0;
}
