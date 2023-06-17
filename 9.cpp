#include<iostream>
using namespace std;

int main()
{
	int input=0,i,sum=0;
	
	cin>>input;
	for(i=1;i<=input;i++) 
	{
    	if(i%3==0){
            sum+=i;
        } 
	}
	cout<<sum<<endl; 
	return 0;
} 
