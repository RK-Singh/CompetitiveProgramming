/*******************************************************************************
programmer: RK Sanayaima Singh
college : United College of Engineering and Research,
Greater Noida.
dated : Fri, Apr 25, 2014
email : sanayaima10@yahoo.in, rksanayai@gmail.com
facebook : https://www.facebook.com/Rksys
https://www.hackerrank.com/rksanayaimasingh
https://www.hackerrank.com/challenges/angry-children
*******************************************************************************/

/* Angry Children Solution */
#include <iostream>
#include <algorithm>
#define max 100000
using namespace std;
int main() {

	int N, K, unfairness = 1000000001, candies[max], t, i;
	cin >> N >> K;
	for (i = 0; i < N; i++)
		cin >> candies[i];
	sort(candies, candies + N);
	for (i = 0; i + K <= N; i++) {
		t = candies[i + K - 1] - candies[i];
		if (t < unfairness)
			unfairness = t;
	}
	cout << unfairness;
	return 0;
}
