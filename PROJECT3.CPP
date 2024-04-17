#include<stdio.h>
#include<conio.h>
main(){
int a;
int b;
int c;
int sum;
clrscr();
printf("Enter your first angle");
scanf("%d",&a);

printf("Enter your second angle");
scanf("%d",&b);

sum=180-(a+b);
printf("your third angle %d",sum);

getch();
}