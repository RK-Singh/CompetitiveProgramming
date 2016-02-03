#include<iostream>
#include<string>
int main() {
	using namespace std;
	ios_base::sync_with_stdio(false);
	string S;
	int t, l;
	cin >> t;
	while (t--) {
		cin >> S;
		l = S.length();
		if (S == "1" || S == "4" || S == "78") {
			cout << "+\n";
		} else if (S[l - 2] == '3' && S[l - 1] == '5') {
			cout << "-\n";
		} else if (S[0] == '9' && S[l - 1] == '4') {
			cout << "*\n";
		} else if (S[0] == '1' && S[1] == '9' && S[2] == '0') {
			cout << "?\n";
		}
	}
	return 0;
}
