// https://www.hackerrank.com/challenges/game-of-thrones

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int count[26];
	for (int i = 0; i < 26; i++)
		count[i] = 0;
	string str;
	cin >> str;
	int l = str.length();
	for (int i = 0 ; i < l; i++)
	{
		count[str[i] - 'a']++;
	}
	int oddCount = 0;
	for (int i = 0; i < 26; i++)
	{
		if (count[i] % 2 != 0)
			oddCount++;
	}
	if (oddCount>1)
		cout << "NO\n";
	else
		cout << "YES\n";
	cin.get();
	cin.get();
	return 0;
}

