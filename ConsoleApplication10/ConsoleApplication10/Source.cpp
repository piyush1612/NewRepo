#include<iostream>
int main()
{
	int count = 0, i,n,a[20];
		std::cin >> n;
		for (i = 0; i<n; i++)
			std::cin >> a[i];
			for (i = 0; i<n; i++)
			{
				if (a[i] != a[i++])
					count++;
			}
			std::cout << count;
			return 0;
}
