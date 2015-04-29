// https://www.hackerrank.com/challenges/gem-stones
/* RK Sanayaima Singh, fb.com/rksys twitter: @SanayaimaRK */
/* United College of Engineering and Research, Gr. Noida  */
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	const int a_z = 26;
	const int size = 105;
	int N;
	int l, idx;
	int count[a_z];
	char input[size];
	for (int i = 0; i < a_z; i++)
		count[i] = 0;
	cin >> N;
	cin.ignore();
	for (int c = 1; c <= N; c++)
	{
		cin.getline(input, size);
		l = strlen(input);
		for (int k = 0; k < l; k++)
		{
			int idx = input[k] - 97;
			if (count[idx] >= c-1)
				count[idx] = c;
		}
	}
	int x = 0;
	for (int k = 0; k < a_z; k++)
		if (count[k] == N)
			x++;
	cout << x << endl;
	return 0;
}
