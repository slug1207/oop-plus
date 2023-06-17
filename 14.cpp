#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input,output;
	bool a=true; 
	
	cin>>input;
	for(int i=input.length()-1;i>=0;i--)//將字串倒轉 
	{
		output[input.length()-1-i]=input[i];
	}
	for(int j=0;j<input.length();j++) 
	{
		if(input[j]!=output[j]){
            		a=false;
			break;
        	} 
		else a=true;
	}
	if(a){
        cout<<"YES"<<endl; 
    }
    else cout<<"NO"<<endl;
	return 0;
} 
