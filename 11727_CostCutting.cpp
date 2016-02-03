#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	int t, n;
	vector<int> a;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		for(int j = 0; j < 3; j++){
			cin>>n;
			a.push_back(n);
		}
		sort(a.begin(), a.end());
		cout << "Case " << i << ": " << a.at(1) << "\n";
		a.clear();
	}
	return 0;
}

