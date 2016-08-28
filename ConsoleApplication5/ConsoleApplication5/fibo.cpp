#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	std::cin >> n;
	std::vector <int> f(n + 1);
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i <= n; i++)
		f[i] = ((f[i - 1] + f[i - 2])%10);
	std::cout << f[n]%6;
	return 0;
}
