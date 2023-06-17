#include<iostream>
using namespace std;
int main()
{
	int input=0,A[8];
	
	cin>>input;
	if(input<0){
        input+=256;
    } 
	for(int i=7;i>=0;i--) 
    {
    	A[i]=input%2; 
    	input/=2; 
    }
    for(int i=0;i<8;i++)
    {
    	if(i==7){
            cout<<A[i]<<endl;
        }
    	else{
            cout<<A[i]; 
        }  
    }	
	return 0;
}
