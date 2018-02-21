#include<iostream>
using namespace std;
int main()
{
int base;
int expo;
int power=1;
cin>>base;
cin>>expo;
if(expo>=1)
{
for(int i=1;i<=expo;i++)
{
power=power*base;
}
cout<<power;
}
if(expo==0)
cout<<"one";
return 0;
}
