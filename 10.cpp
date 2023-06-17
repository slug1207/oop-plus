#include<iostream>
using namespace std;


int main(){
    int a,b,r;
    cin>>a>>b;
    do
    {
        r = a;
        a = b;
        b = r%a;
    }while(b);
    cout<<a<<endl;
    return 0;

}