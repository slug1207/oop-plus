#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m,count = 0;
    cin>>n>>m;
    int num[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            cin>>num[i][j];
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            count++;
            cout<<num[j][i];
            if(count%n!=0)
            {
                cout<<" ";
            }
        }
        cout<<endl;

    }

    return 0;
}