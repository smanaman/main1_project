#include<stdio.h>
#include<conio.h>
main(){
int bs ;
int hra;
int da;
int ta;
int sum;
hra=(hra/bs)*100;
da=(da/bs)*100;
ta=(ta/bs)*100;
clrscr();
printf("Enter your value bs");
scanf("%d",&bs);

printf("Enter your value hra");
scanf("%d",&hra);

printf("Enter your value da");
scanf("%d",&da);

printf("Enter your value ta");
scanf("%d",&ta);

sum=bs+hra+da+ta;

printf("%d",sum);


getch();
}