#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	int T, balance = 0;
	string query;
	cin >> T;
	while (T--) {
		cin >> query;
		if (query == "donate") {
			int b;
			cin >> b;
			balance += b;
		} else if (query == "report") {
			cout << balance << "\n";
		}
	}
	return 0;
}

