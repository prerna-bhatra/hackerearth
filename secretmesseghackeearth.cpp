#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter number of messeges\n";
	cin>>n;
	string s[10];
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j!=s[i].size();j++)
		if(s[i][j]>=64&&s[i][j]<=97||s[i][j]>=97&&s[i][j]<=122)
		{
			s[i][j]=s[i][j]+4;
		}
	}
		for(i=0;i<n;i++)
	{
		cout<<"encrypted message:"<<s[i]<<"\n";
	}
}
