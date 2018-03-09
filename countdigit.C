#include<stdio.h>
int main()
{
int n,num,c=0;
printf("enter the no:");
scanf("%d",&n);
num=n;
while(num!=0)
{
c++;
num=num/10;
}
printf("%d",count);
return 0;
}
