/*******************************************************************************
programmer: RK Sanayaima Singh
college : United College of Engineering and Research,
Greater Noida.
dated : Fri, Apr 25, 2014
email : sanayaima10@yahoo.in, rksanayai@gmail.com
facebook : https://www.facebook.com/Rksys
https://www.hackerrank.com/rksanayaimasingh
https://www.hackerrank.com/challenges/sherlock-and-the-beast
*******************************************************************************/

/* Sherlock and the Beast Solution */
#include <iostream>
using namespace std;
void generate(const int N);
int main()
{
	int T, N;
	cin >> T;
	while (T > 0)
	{
		cin >> N;
		generate(N);
		T--;
	}
	cin.get();
	cin.get();
	return 0;
}
void generate(const int N)
{
	int flag = 0, count3 = 0, count5 = N;
	while (count3 <= N)
	{

		if (count5 % 3 == 0)
		{

			flag = 1;
			while (count5 > 0)
			{
				cout << 5;
				count5--;
			}
			while (count3 > 0)
			{
				cout << 3;
				count3--;
			}
			cout << endl;
			break;
		}
		else
			flag = -1;
		count3 = count3 + 5;
		count5 = N - count3;
	}
	if (flag == -1)
		cout << -1 << endl;
}
