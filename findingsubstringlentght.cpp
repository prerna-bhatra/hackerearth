#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s="abcdeabcdeabcde";
	int i,j=0;
	for(i=0;s[i]!='\0';i++)
	{
	   if(s[i]==s[0])
	   {
	   if(i==0)
	   {
	   	continue;
	   }
	   else
	   {
	   	cout<<"length of substring="<<i;
	   	break;
	   	
	   }
	   
	}
	

	}
		
		
	

	
}
