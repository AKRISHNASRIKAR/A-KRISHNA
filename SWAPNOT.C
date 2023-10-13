#include<stdio.h>
int main()
{
    int A,B;
clrscr();
printf("Enter values of A&B");
scanf("%d%d",&A,&B);
A= A+B;
B= A-B;
A= A-B;
printf("values of A and B after swapping is A=%d and B=%d",A,B);
getch();
return 0;
}