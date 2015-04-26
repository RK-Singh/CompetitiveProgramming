/*******************************************************************************
programmer: RK Sanayaima Singh
college : United College of Engineering and Research,
Greater Noida.
dated : Fri, Apr 25, 2014
email : sanayaima10@yahoo.in, rksanayai@gmail.com
facebook : https://www.facebook.com/Rksys
https://www.hackerrank.com/rksanayaimasingh
https://www.hackerrank.com/challenges/chocolate-feast
*******************************************************************************/

/* Chocolate Feast Solution */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t, n, c, m;
	cin >> t;
	while (t--){
		cin >> n >> c >> m;
		int answer = n / c;
		int wrappers = answer;
		int temp = 0;
		while (wrappers >= m){
			temp = wrappers / m;
			answer += temp;
			wrappers %= m;
			wrappers += temp;

		}
		cout << answer << endl;
	}
	return 0;
}
