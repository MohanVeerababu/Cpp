#include<iostream>
using namespace std;
int main()
{
    int a;
    int first=0,second=1,next;
    cout<<"enter the value : ";
    cin>>a;
    cout<<"fibonacci series : "<<first<<" "<<second<<" ";
    for(int i=3;i<=a;i++)
    {
    next=first+second;
    cout<<" "<<next;
    first=second;
    second=next;
    }
    cout<<endl;
    return 0;
}
