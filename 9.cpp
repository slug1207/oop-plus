#include<iostream>
using namespace std;

int main()
{
	int input=0,i,sum=0;
	
	cin>>input;
	for(i=1;i<=input;i++)//找出最近的3的倍數 
	{
    	if(i%3==0){
            sum+=i;
        } 
	}
	cout<<sum<<endl;//得到總和(等差級數和公式) 
	return 0;
} 