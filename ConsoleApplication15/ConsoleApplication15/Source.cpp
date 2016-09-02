#include<iostream>
using namespace std;
int main()
{
	int a, b, c, m;
	cin >> m;
	a = m / 10;
	int r1 = m % 10;
	b = r1 / 5;
	int r2 = r1 % 5;
	c = r2 / 1;
	int res = a + b + c;
	cout << res;
	return 0;
}