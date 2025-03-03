#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the A value :";
    cin>>a;
    cout<<"enter the B value :";
    cin>>b;
    cout<<"enter the C value :";
    cin>>c;
    
    if(a>b&&a>c)
    {
        cout<<"A is a largest number "<<endl;
    }
    else if(b>a&&b>c)
    {
        cout<<"B is a largest number"<<endl;
    }
    else
    {
        cout<<"C is a largest number"<<endl;
    }
    return 0;
}
