#include<iostream>
using namespace std;

int main()
{
	int input=0;
	
	cin>>input;
	switch(input/3)//取商數為區分點 
	{
		case 1:cout<<"Spring"<<endl;break; 
		case 2:cout<<"Summer"<<endl;break;
		case 3:cout<<"Autumn"<<endl;break;
		default :cout<<"Winter"<<endl; 
	} 
	return 0;
} 
