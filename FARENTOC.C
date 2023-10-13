#include<stdio.h>
int main()
{
float farenheit, celsius;
clrscr();
printf("enter value of farenheit ");
scanf("%f",&farenheit);
celsius=9/5*farenheit+32;
printf("value of celsius=%f",celsius);
getch();
return 0;
}