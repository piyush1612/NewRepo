#include <iostream>
#include <vector>
using namespace std;
int main()
{
	long long n, m;
	std::cin >> m;
	std::cin >> n;
	int a = n % 60;
	int b = m % 60;
	int i, sum = 0, res1 = 0, res2 = 0;
	std::vector <int> f(60);
	for (i = 0; i <= 59; i++)
	{
		if ((i == 0) || (i == 1))
			f[i] = i;
		else
			f[i] = (f[i - 1] + f[i - 2]) % 10;
	}
	if (a > b)
	{
		for (i = b; i <= a; i++)
			sum = (sum + f[i]) % 10;
	}
	else
	{
		for (i = 0; i <= a; i++)
			res1 = (res1 + f[i]) % 10;
		for (i = b; i <= 59; i++)
			res2 = (res2 + f[i]) % 10;
		sum = (res1 + res2) % 10;
	}
	std::cout << sum;
	return 0;
}