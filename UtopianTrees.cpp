// https://www.hackerrank.com/challenges/utopian-tree
/*******************************************************************************
programmer: RK Sanayaima Singh
college : United College of Engineering and Research,
Greater Noida.
dated : Fri, Apr 25, 2014
email : sanayaima10@yahoo.in, rksanayai@gmail.com
facebook : https://www.facebook.com/Rksys
*******************************************************************************/

/* Utopian Trees Solution */
#include <iostream>

using namespace std;

int compute(int beg, int end, int height);

int main(){
	int T, N, h = 1, j = 1;
	cin >> T;
	for (int i = 1; i <= T; i++){
		cin >> N;
		cout << compute(1, N, 1) << endl;
	}
}

int compute(int beg, int end, int height){
	while (beg <= end){
		if (beg & 1) // monsoon
			height *= 2;
		else // summer
			height++;//=2;
		beg++;
	}
	return height;
}
