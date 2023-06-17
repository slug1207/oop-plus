#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float tmp,a,b;
	cin >> tmp;
	a = tmp;
	b = tmp;
	for (int i = 0;i < 9; i++)
	{
		cin >> tmp;
		if (tmp > a)
		{
			a = tmp;
		}
		else if (tmp < b)
		{
			b = tmp;
		}
	}
	cout << "maximum:" << fixed << setprecision(2) << a << endl;
	cout << "minimum:" << fixed << setprecision(2) << b << endl;
	return 0;
}
