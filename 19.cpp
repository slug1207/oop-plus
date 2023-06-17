#include<iostream>
using namespace std;
int main()
{
	int input=0,t[24]={0};
	cin>>input;
	for(int i=0;i<input;i++) 
	{
		int a=0,b=0;
		cin>>a>>b;
		for(int j=a-1;j<b-1;j++){
            		t[j]++;
        	}
	}
	input=t[0]; 
	for(int i=0;i<24;i++){
        if(input<t[i]){
            input=t[i];
        }
    }//找最大值 
	cout<<input<<endl;
	return 0;
}
