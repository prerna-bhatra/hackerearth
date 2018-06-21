#include<iostream>
using namespace std;

int sub(int a,int b)
{
    
    while(a!=0,b!=0)
    {
    a=a-1;
        b=b-1;
    if(a==0&&b==0)
   {
       cout<<"yes\n";
   }
   else
   {
       cout<<"no\n";
       break;
   }
   sub(a,b);
    }
   
   
    
    
    
}
int main()
{
	int i;
	cin>>i;
	int a[]={1,1};
	int x=a[i],y=a[i+1];
	
	sub(x,y);
}
