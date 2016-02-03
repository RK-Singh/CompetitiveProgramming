#include<iostream>
int main() {
	using namespace std;
	ios_base::sync_with_stdio(false);
	int n, f, ans, s, a, c;
	cin >> n;
	while (n--) {
		cin >> f;
		ans = 0;
		while (f--) {
			cin >> s >> a >> c;
			ans += s * c;
		}
		cout << ans << "\n";
	}
	return 0;
}
