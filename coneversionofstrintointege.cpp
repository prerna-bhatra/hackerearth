#include<stdio.h>
#include<string.h>
int main()
{
int t;
char str[100000];
scanf("%d",&t);
while(t--)
{
gets(str);
for(int i=0;i<strlen(str);i++)
{
if(str[i]>=65&&str[i]<=90)
{
str[i]=(int)(str[i]-64);
printf("%d",str[i]);
}
else if(str[i]>=97&&str[i]<=122)
{
str[i]=(int)(str[i]-96);
printf("%d",str[i]);
}
else if(str[i]=" ")
{
str[i]='$';
printf("%c",str[i]);
}
else
printf("%c",str[i]);
}
printf("\n");
}
return 0;
}
