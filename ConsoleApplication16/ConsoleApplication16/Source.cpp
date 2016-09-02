#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, m, i, j, a, b;
	float wt = 0, pr = 0;
	cin >> n >> m;
	vector<int> v(n);
	vector<int> w(n);
	vector<int> p(n);
	for (i = 0; i<n; i++)
	{
		cin >> v[i] >> w[i];
	}
	for (j = 0; j<n; j++)
	{
		p[j] = v[j] / w[j];
	}
	for (i = 0; i<n - 1; i++)
		for (j = i + 1; j<n; j++)
			if (p[i]<p[j])
			{
				a = v[i];
				v[i] = v[j];
				v[j] = a;
				b = w[i];
				w[i] = w[j];
				w[j] = b;
			}
	for (i = 0; i < n; i++)
	{
		if (w[i] < (m - wt))
		{
			pr += v[i];
			wt += w[i];
		}
		else
		{
			float k = (m - wt) / w[i];
			pr += (k*v[i]);
			wt += (k*w[i]);
		}
	}
	cout << pr;
	return 0;
}