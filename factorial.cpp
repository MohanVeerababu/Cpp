//factorial of  a number
#include<iostream>
using namespace std;
int main()
{
    int a,i;
    int factorial=1;
    cout<<"enter the value = ";
    cin>>a;
   for( i=2;i<=a;++i)
       {
       factorial*=i;  
       
        
       }
       cout<< "factroial of "<< a <<" is = "<<factorial;
               return 1;
      
       
   
}
