#include<iostream>
int gcd(int c, int d)
{
	if (d==0)
		return c;
	else
	{
		int e = c % d;
		return gcd(d,e);
	}
}     
int main()
{
	unsigned long long a, b;
	std::cin >> a;
	std::cin >> b;
	int q = gcd(a, b);
	unsigned long long res = (a*b)/q;
	std::cout <<"\n"<< res;
	return 0;
}