#include<iostream>
#include<string.h>
using namespace std;
int Atoi(char *s)
{
	int res=0;
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		res=res*10+s[i]-'0';
		return res;
	}
}
int main()
{
	char s[]="823";
	int v=Atoi(s);
	cout<<v;
	
	
}
