#include<stdio.h>
int main()
{
float si,p,r,t;
clrscr();
printf("enter values of p,r,t");
scanf("%f%f%f",&p,&r,&t);
si=p*r*t/100;
printf("value of simple interest is =%f",si);
getch();
return 0;
}
