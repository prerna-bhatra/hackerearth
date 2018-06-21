#include<iostream>
int partation(int[],int,int);
using namespace std;
int main()
{
	int n;
	int a[n],x,y;
	
	partation(a,x,y);
}
int partation(int a[10],int x,int y )
{
	int b=a[10];    
	 int i,j;

	
	x=0;
	y=10;
	for(i=0;i<9;i++)
	{
		cin>>a[i];
	}
	 i=x;
     for(j=1;j<=9;j++)
     {
     	 if(a[j]<=b)
     	 {
     	 	i++;
     	 	swap(a[i],a[j]);
		  }
	 }
	 swap(a[i+1],a[y]);
	 
	 
	 for(i=0;i<9;i++)
	 {
	 	cout<<a[i]<<"\t";
	 }
	 }
