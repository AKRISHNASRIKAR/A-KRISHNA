
#include<stdio.h>
int main()
{
int a,b,temp;
clrscr();
printf("enter value of a,b");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("values after swapping a=%d,b=%d",a,b);
getch();
return 0;
}





















