#include<iostream>
using namespace std;

int addition(int a,int b)
{
  int sum ;
  sum=a+b;
  cout<<"ADITTION OF A+B = "<<sum<<endl;
  return 0;
}
int substraction(int c,int d)
{
    int sub;
    sub=c-d;
    cout<<"SUBSTRACTION OF C-D = "<<sub<<endl;

    return 0;
}
int multiplication(int e,int f)
{
    int multi;
    multi=e*f;
    cout<<"Multiplication of e*f = "<<multi<<endl;

    return 0;
}
int division(int g,int h)
{
    int divi;
    divi=g/h;
    cout<<"Division of g/h = "<<divi<<endl;

    return 0;
}
int main()
{
    int a,b,c,d;
    int  e,f,g,h;
    cout<<"enter the A value = ";
    cin>>a;
    cout<<"enter the B value = ";
    cin>>b;
    cout<<"enter the C value = ";
    cin>>c;
    cout<<"enter the D value = ";
    cin>>d;
    cout<<"enter the E value = ";
    cin>>e;
    cout<<"enter the F value = ";
    cin>>f;
    cout<<"enter the G value = ";
    cin>>g;
    cout<<"enter the H value = ";
    cin>>h;
    cout<<addition(a,b);
    cout<<substraction(c,d);
    cout<<multiplication(e,f);
    cout<<division(g,h);
}
