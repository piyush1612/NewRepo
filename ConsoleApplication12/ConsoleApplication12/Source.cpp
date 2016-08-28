#include<iostream>
using namespace std;
int main()
{
	int n, a[10], i, j, p, f;
	cin >> n;
	for (i = 0; i<n; i++)
		cin >> a[i];
	for (p = 1; p <= n; p++)
	{
		for (i = 0; i < n; i++)
		{
			j = i + p;
			if (a[i] == a[j])
				cout << p;
		}
	}
	return 0;
}