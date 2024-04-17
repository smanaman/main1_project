#include<stdio.h>
#include<conio.h>
main(){
int c;
float a=1.8;
float f;
clrscr();
printf("Enter your celsius");
scanf("%d",&c);
f=(c*a)+32;
printf("%.1f",f);
getch();
}