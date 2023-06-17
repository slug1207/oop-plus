#include <iostream>
using namespace std;

int main ()
{
	int n,i,ans;
	cin >> n;
	ans = 1;
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
		{
			ans = 0;
		}
		i++;
	}
	if (ans == 1)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}