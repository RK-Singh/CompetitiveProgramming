#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	vector<string> url;
	vector<int> rank;
	const int size = 10;
	int T, id, r;
	string ur;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		url.clear();
		rank.clear();
		for (int i = 0; i < size; i++) {
			cin >> ur >> r;
			url.push_back(ur);
			rank.push_back(r);
		}
		int max = -1;
		for (auto x : rank) {
			if (max < x) {
				max = x;
			}
		}
		cout << "Case #" << t << ":\n";
		for (int i = 0; i < size; i++) {
			if (rank.at(i) == max) {
				cout << url.at(i) << "\n";
			}
		}
	}
	return 0;
}
