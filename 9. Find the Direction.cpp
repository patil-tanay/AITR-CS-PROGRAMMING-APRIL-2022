#include<iostream>
using namespace std;
int main()
{
int T;
cin>>T;
while(T--)
{
int X;
cin>>X;
if(X%4==0)
cout<<"North"<<endl;
else if(X%4==1)
cout<<"East"<<endl;
else if(X%4==2)
cout<<"South"<<endl;
else
cout<<"West"<<endl;
}
return 0;
}