#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int N;
	const int size = 10;
	vector<int> ljs;
	cin >> N;
	cout << "Lumberjacks:\n";
	while (N--) {
		bool asc = true;
		bool dsc = true;
		int el, last;
		ljs.clear();
		for (int i = 0; i < size; i++) {
			cin >> el;
			ljs.push_back(el);
		}
		el = ljs[0];
		for (auto a : ljs) {
			if(el < a){
				dsc = false;
			}
			if(el > a){
				asc = false;
			}
			if(!asc && !dsc){
				break;
			}
			el = a;
		}
		if(asc || dsc){
			cout<<"Ordered\n";
		}else{
			cout<<"Unordered\n";
		}
	}
	return 0;
}
