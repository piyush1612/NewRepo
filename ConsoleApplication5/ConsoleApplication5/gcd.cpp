#include<iostream>
void gcd(int a, int b)
{
	if (b = 0)
		std::cout << a;
	else
	{
		int c = a%b;
		gcd(b, c);
	}
}
int main()
{
	int a, b;
	std::cin >> a >> b;
	gcd(a, b);
	return 0;
}