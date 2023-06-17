#include<iostream>
using namespace std;

int main()
{
	int x=0,y=0;
	while(cin>>x>>y)
	{
        int a = x, b = y; 
		if(a*a+b*b <= 10000){
            cout<<"inside"<<endl;
        } 
		else{
            cout<<"outside"<<endl;
        } 
	}
	return 0;
} 
	
