#include<iostream>
int sum(int n, int s = 0) {
	if (n > 9) {
		return sum(n / 10, s + n % 10);
	}
	s = s + n;
	if (s > 9) {
		return sum(s);
	}
	return s;
}

int main() {
	using namespace std;
	ios_base::sync_with_stdio(false);
	int n;
	while (cin >> n && n != 0) {
		cout << sum(n) << "\n";
	}
	return 0;
}
