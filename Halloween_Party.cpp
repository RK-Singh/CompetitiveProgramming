/*******************************************************************************
programmer: RK Sanayaima Singh
college : United College of Engineering and Research,
Greater Noida.
dated : Fri, Apr 25, 2014
email : sanayaima10@yahoo.in, rksanayai@gmail.com
facebook : https://www.facebook.com/Rksys
https://www.hackerrank.com/rksanayaimasingh
https://www.hackerrank.com/challenges/halloween-party
*******************************************************************************/

/* Halloween Party Solution */
#include<iostream>
using namespace std;
int main()
{
	int T, K, row, col;
	cin >> T;
	for (; T > 0; T--)
	{
		cin >> K;
		row = K / 2;
		col = K - row;
		cout << (long)row*col << endl;
	}
	return 0;
}
