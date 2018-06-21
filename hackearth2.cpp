#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	
	int n;
	cout<<"enter number of string you want to enetr \n";
	cin>>n;
	string a[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int j,k,h;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		  for(k=0,h=(a[i].size()-1);k<a[j].size(),h>0;k++,h--)
		  {
		  	if(a[i][k]==a[j][h])
		  	{
		  		cout<<"\n length="<<a[i].size()<<"\nmiddle charcter="<<a[i].at(a[i].size()/2);
		  		
		   }
		  else
			  {
			  	cout<<"\n no string is in pailindrome\n";
			  	
			  }
			  
			  }	
			  
			  
		
			
		}
	break;	
	}
}
