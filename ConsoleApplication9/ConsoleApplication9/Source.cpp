#include<iostream>
using namespace std;
int main()
{
	long long m, n;
	cin >> m >> n;
	m = m % 60;
	n = n % 60;
	int res = 0, a = 0, b = 1,c;
	for (int i = 0; i<n; i++)
	{
		
		
		c = (a + b)%10;
		a = b;
		b = c;

		if (i >= m - 1)
			res = (res + a)%10;
		
	}
	cout << res;
}