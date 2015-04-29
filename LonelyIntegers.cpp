// https://www.hackerrank.com/challenges/lonely-integer
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    int c[105];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    sort(c, c + n, greater<int>());
    if(n==1){
        cout << c[0];
        return 0;
    }
    c[0];
    for (int i = i; i < n-1; i+=2)
    {
        if(c[i] != c[i+1])
        {
            cout<<c[i];
            return 0;
        }
    }
    cout<<c[n-1];
    return 0;
}
