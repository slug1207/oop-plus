#include<iostream>
#include<cmath>
using namespace std;

int A (int input);
int main()
{
	int input=0;
	cin>>input; 
	cout<<A(input)<<endl;
	return 0;
}
int A (int input)
{
	if(input==0||input==1) 
	{
		return input+1;
	}
	else return A(input-1)+A(ceil(input/2));
	 
} 
