#include<iostream>
#include<vector>
int main() {
	using namespace std;
	ios_base::sync_with_stdio(false);
	int T, N, hi, lo;
	vector<int> p;

	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> N;
		int elm;
		p.clear();
		for (int n = 0; n < N; n++) {
			cin >> elm;
			p.push_back(elm);
		}
		int c = p.at(0);
		hi = 0;
		lo = 0;
		for (auto a : p) {
			if (a > c)
				hi++;
			if (a < c)
				lo++;
			c = a;
		}
		cout << "Case " << t << ": " << hi << " " << lo << "\n";
	}
	return 0;
}
