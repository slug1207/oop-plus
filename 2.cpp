#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int input;
	while(cin>>input)
	{
		float a = input*1.6;
		cout<<fixed<<setprecision(1)<<a<<endl;
	}
	return 0;
}
