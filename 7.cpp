#include<iostream>
using namespace std;

int main()
{
	int input=0;
	
	cin>>input;
	while(input--)
	{
		int a=0,b=0,c=0,d=0;
		char w; 
		
		cin>>w>>a>>b>>c>>d;
		switch(w) 
		{ 
			case '+':cout<<a+c<<" "<<b+d<<endl;break;
			case '-':cout<<a-c<<" "<<b-d<<endl;break;
			case '*':cout<<a*c-b*d<<" "<<b*c+a*d<<endl;break;
		}
	}
	return 0;
} 
