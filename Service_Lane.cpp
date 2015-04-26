/*******************************************************************************
programmer: RK Sanayaima Singh
college : United College of Engineering and Research,
Greater Noida.
dated : Fri, Apr 25, 2014
email : sanayaima10@yahoo.in, rksanayai@gmail.com
facebook : https://www.facebook.com/Rksys
https://www.hackerrank.com/rksanayaimasingh
https://www.hackerrank.com/challenges/service-lane
*******************************************************************************/

/* Service Lane Solution */
#include<iostream>
using namespace std;
int main(){
	unsigned int N, T, i, j, k;
	short width[100000];
	cin >> N >> T;
	for (k = 0; k<N; k++)
		cin >> width[k];
	while (T--){
		cin >> i >> j;
		int min = 3;
		for (k = i; k <= j; k++){
			min = width[k]<min ? width[k] : min;
			if (min == 1)
			{
				cout << 1 << endl;
				break;
			}
		}
		if (min == 2)
			cout << 2 << endl;
		else if (min == 3)
			cout << 3 << endl;

	}
	return 0;
}
