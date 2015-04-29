// https://www.hackerrank.com/challenges/the-love-letter-mystery
/* RK Sanayaima Singh, fb.com/rksys twitter: @SanayaimaRK */
/* United College of Engineering and Research, Gr. Noida  */
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	int T, len;
	cin >> T;
	string str;
	while (T--)
	{
		cin >> str;
		len = str.length();
		int count = 0;
		for (int i = 0; i < len / 2; i++)
		{
			count += abs(str[i] - str[len - i - 1]);
		}
		cout << count << endl;
	}
	return 0;
}
