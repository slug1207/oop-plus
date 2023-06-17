#include <iostream>
using namespace std;

int main ()
{
	int N,sum;
	int a,b,c;
	cin >> N;

	for (int i = 0; i < N; i ++)
	{
		cin >> a >> b >> c;
		sum = a + b + c;
		if (a >= 60 && b >= 60 && c >= 60)
		{
			cout << "P" << endl;
		}
		else if (((a < 60 && b >= 60 && c >= 60) || (b < 60 && c >= 60 && a >= 60) || (c < 60 && a >= 60 && b >= 60)) && sum >= 220)
		{
			cout << "P" << endl;
		}
		else if (((a < 60 && b >= 60 && c >= 60) || (b < 60 && c >= 60 && a >= 60) || (c < 60 && a >= 60 && b >= 60)) && sum < 220)
		{
			cout << "M" << endl;
		}
		else if (((a < 60 && b < 60 && c >= 80) || (b < 60 && c < 60 && a >= 80) || (c < 60 && a < 60 && b >= 80)))
		{
			cout << "M" << endl;
		}
		else
		{
			cout << "F" << endl;
		}
	}
	return 0;
}
