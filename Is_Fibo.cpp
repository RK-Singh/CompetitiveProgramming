/******************************************************************************
	programmer: RK Sanayaima Singh
       college: United College of Engineering and Research,
                Greater Noida.
         dated: Fri, Apr 25, 2014
         email: sanayaima10@yahoo.in , rksanayai@gmail.com
      facebook: https://www.facebook.com/Rksys
                    -----------------------
https://www.hackerrank.com/rksanayaimasingh
https://www.hackerrank.com/challenges/is-fibo
*******************************************************************************/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	/*
		generating all fibonacci numbers less than the maximum size
		for something like dictionary lookup
	*/
	
	vector<unsigned long long> fibo;
	int i = 0;
	const long long max_fibo = 10000000000LL; // all 10 digit fibonacci numbers
	fibo.push_back(1); // 1st term
	fibo.push_back(1); // 2nd term
	for (int current = 2; fibo[current - 1] < max_fibo; current++)
	{
		fibo.push_back(fibo[current - 1] + fibo[current - 2]);// fib_n = fib_n-1 +fib_n-2
	}
	/* all fibonacci numbers generated upto our limit and sorted*/

	int testCase;
	unsigned long long numToTest;
	cin >> testCase;
	while (testCase--) // search for all test cases
	{
		cin >> numToTest; // read our number to test
		if (binary_search(fibo.begin(), fibo.end(), numToTest) == true)
			cout << "IsFibo\n";
		else
			cout << "IsNotFibo\n";
	}
	return 0;
}
