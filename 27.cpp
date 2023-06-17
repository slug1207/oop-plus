#include<iostream>
using namespace std;
int main()
{
	int an=0,ans[4],ain[4];
	cin>>an;
	for(int i=3;i>=0;i--)
	{
		ans[i]=0;
		ans[i]=an%10;an/=10;
	}
	while(true) 
	{
		int in=0,a=0,b=0;
		cin>>in;
		int flag=0; 
		for(int i=3;i>=0;i--)//逆向讀入陣列 
		{
			ain[i]=in%10;
			in/=10; 
			if(ain[i]==0)flag++;//判定0的個數 
			if(ain[i]==ans[i]){a++;continue;} 
			else {
				for(int j=0;j<4;j++){
					if(ain[i]==ans[j]&&j!=i){
						b++;
						break;}
				}
			} 
		}
		if(flag==4)break; 
		else cout<<a<<"A"<<b<<"B"<<endl; 
	}
	return 0;
} 
