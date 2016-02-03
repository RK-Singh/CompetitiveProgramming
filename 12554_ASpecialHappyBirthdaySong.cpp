#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	const vector<string> song = { "Happy", "birthday", "to", "you", "Happy",
			"birthday", "to", "you", "Happy", "birthday", "to", "Rujia",
			"Happy", "birthday", "to", "you" };
	vector<string> singers;
	int N;
	string text;
	cin>>N;
	for (int n = 0; n < N; n++) {
		cin >> text;
		singers.push_back(text);
	}
	int times = song.size() * ((N / 16) + 1);
	for (int i = 0; i < times; i++) {
		cout << singers.at(i % singers.size()) << ": "
				<< song.at(i % song.size()) << "\n";
	}
	return 0;
}
