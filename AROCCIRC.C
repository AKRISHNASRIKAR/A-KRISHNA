#include<stdio.h>
int main()
{
float area,radius,pi=3.14;
clrscr ();
printf("enter radius");
scanf("%f",&radius);
area=pi*radius*radius;
printf("area of the circle is=%f",area);
getch();
return 0;
}