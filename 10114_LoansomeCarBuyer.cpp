/*
 * not working yet
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int M, D, m;
	double DP, LA, r, C;
	while (cin >> M && M >= 0) {
		cin >> DP >> LA >> D;
		C = DP + LA;
		int i = 0;
		bool found = false;
		for (int d = 0; d < D; d++) {
			cin >> M >> r;
			if (!found) {
				for (; i <= M; i++) {
					cout << LA << " " << C << "\n";

					C = C - r * C;
					LA = LA - DP;
					if (LA <= C) {
						found = true;
					}
				}
			}
		}
		if (found) {
			if (i == 1) {
				cout << "1 month\n";
			} else {
				cout << i << " months\n";
			}
		}
	}
	return 0;
}
