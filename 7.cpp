#include<iostream>
using namespace std;

int main()
{
	int input=0;
	
	cin>>input;
	while(input--)//依據輸入的行數遞減計算次數 
	{
		int a=0,b=0,c=0,d=0;
		char w;//運算符號 
		
		cin>>w>>a>>b>>c>>d;
		switch(w)//依據運算符號來決定計算方式 
		{//依據運算符號輸出計算公式的答案 
			case '+':cout<<a+c<<" "<<b+d<<endl;break;
			case '-':cout<<a-c<<" "<<b-d<<endl;break;
			case '*':cout<<a*c-b*d<<" "<<b*c+a*d<<endl;break;
		}
	}
	return 0;
} 