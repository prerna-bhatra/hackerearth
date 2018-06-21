#include<stdio.h>
int main()
{
	int i,n,max=-1,t=0,l,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
		if(i==0)
		{
			l=p;
			t++;
		}
		else if(p==l)
		{
			t++;
		}
		else
		{
			l=p;
			if(t>max)
			{
				max=t;
			}
			t=1;
		}
		
	}
	
	printf("%d",max);
}
