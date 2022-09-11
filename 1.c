#include<stdio.h>
#include<stdlib.h>
int main()
{
int num1,num2;
printf("enter the first number:"); 
scanf("%d",&num1);
printf("enter the second number:");
scanf("%d",&num2);
printf("sum of %d+%d",num1,num2);
printf("=%d",(num1+num2));
printf("\nsubtraction of %d-%d",num1,num2);
printf("=%d",(num1-num2));
printf("\nmultiplication of %dX%d",num1,num2);
printf("=%d",(num1*num2));
printf("\ndivision of %d/%d",num1,num2);
printf("=%d",(num1/num2));
getch();
return(0);
}
