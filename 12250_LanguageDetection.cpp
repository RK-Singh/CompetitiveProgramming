#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	string str;
	int k = 1;
	while (cin >> str && str != "#") {
		cout << "Case " << k << ": ";
		if (str == "HELLO") {
			cout << "ENGLISH\n";
		} else if (str == "HOLA") {
			cout << "SPANISH\n";
		} else if (str == "HALLO") {
			cout << "GERMAN\n";
		} else if (str == "BONJOUR") {
			cout << "FRENCH\n";
		} else if (str == "CIAO") {
			cout << "ITALIAN\n";
		} else if (str == "ZDRAVSTVUJTE") {
			cout << "RUSSIAN\n";
		}else{
			cout<<"UNKNOWN\n";
		}
		k++;
	}
	return 0;
}

