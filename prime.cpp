#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the A value :";
    cin>>a;
      bool isprime = true;
    if(a<=1)
    {
        cout<<"it is not a prime number";
        
    }
    else 
    {
    
      
        for(int i=2;i<=a/2;i++)
        {
          if(a %i ==0)
          {
               isprime = false;
              break;
          }
        }
    }
    if(isprime==true)
    {
        cout<<"it is a prime number";
    }
    else
    {
        cout<<"it is not a prime number";
    }
    return 0;
    
}
