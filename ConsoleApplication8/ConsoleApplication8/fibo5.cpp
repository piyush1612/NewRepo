#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,i;
	std::cin >> n;
	std::vector <int> f(n + 1);
	f[0] = 0;
	f[1] = 1;
	for (i = 2; i <= n; i++)
	{
		f[i] = ((f[i - 1] + f[i - 2]));
		f[i] = f[i] % 3;
	}
	for (int a = 2; a <= n / 2; a++)
	{
		for (i = 0; i <= n / 2; i++)
		{
			if (f[a + i] == f[i])
				cout << "done\n";
			cout << a << "\n";
		}
	}
					return 0;
}
