#include<stdio.h>
#include<conio.h>

void main()
{
int p,r,t,si;
clrscr();

printf("Enter principal amount:\n");
scanf("%d",&p);

printf("Enter Rate of interest:\n");
scanf("%d",&r);

printf("Enter period of time:\n");
scanf("%d",&t);

si=(p*r*t)/100;
printf("Simple Interest = %d",si);

getch();
}
