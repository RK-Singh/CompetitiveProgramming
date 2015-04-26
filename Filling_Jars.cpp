/*******************************************************************************
programmer: RK Sanayaima Singh
college : United College of Engineering and Research,
Greater Noida.
dated : Fri, Apr 25, 2014
email : sanayaima10@yahoo.in, rksanayai@gmail.com
facebook : https://www.facebook.com/Rksys
https://www.hackerrank.com/rksanayaimasingh
https://www.hackerrank.com/challenges/filling-jars
*******************************************************************************/

/* Filling Jars Solution */
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double jar = 0.0; // all our candies contains in a huge jar, not on many jars
	double M, N, a, b, k; //
	cin >> N >> M;
	while (M--) // run for all inputs
	{
		cin >> a >> b >> k;
		jar += (double)((abs(b - a) + 1.0) * k);

	}
	/* to make sure we are printing in standard form not in scientific notation*/
	cout << fixed;
	cout << (unsigned long)floor(jar / N) << endl;
	return 0;

}
