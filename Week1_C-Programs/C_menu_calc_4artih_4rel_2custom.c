#include<stdio.h>
#include<conio.h>
int main()
{
    
char flag;
int num1, num2, result = 0;

while(1)
{
printf("\nEnter First Value:");
scanf("%d",&num1);

printf("\nEnter Operator\n+ (addition),\n - (subtraction),\n * (multiplication),\n / (division) ,\n % (remainder) ,\n ^ (num1(to the power)num2) ,\n < (less than?) ,\n > (greater than?),\n = (equal to?),\n ! (not equal to?)\n\n");

scanf(" %c",&flag);

printf("\nEnter Second Value:");
scanf("%d",&num2);

switch(flag)
{
case '+':
   result = num1 + num2;
   printf("\nSum is = %d",result);
 break;
 
case '-':
   result = num1 - num2;
   printf("\nDifference is = %d",result);
   printf("\n\n Enter value  Again for a New Input\n");
 break;
 
case '*':
   result = num1 * num2;
   printf("\nProduct is = %d",result);
   printf("\n\n Enter value Again for a New Input\n");
 break;
 
case '/':
   result = num1 / num2;
   printf("\nQuotient is = %d",result);
   printf("\n\n Enter value Again for a New Input\n");
 break;
 
case '%':
   result = num1 % num2;
   printf("\nReminder is = %d",result);
   printf("\n\n Enter value Again for a New Input\n");
    break;
   
 case '>':
 if(num1>>num2)
 {
 printf("yes");
 }
 else{
      printf("\n\nNo");
       printf("\n Enter value Again for a New Input\n");
 }
  break;
 
 case '<':
 if(num1>>num2)
 {
 printf("no");
 }
 else{
      printf("\n\nyes");
     printf("\n Enter value Again for a New Input\n");
 }
  break;
  
 case '=':
 if(num1==num2)
 {
 printf("yes");
 }
 else{
      printf("\n\nno");
     printf("\n Enter value Again for a New Input\n");
 }
 break; 
 case '^':
 printf("%lf",pow(num1,num2));
 break; 
 
 case '!':
 if(num1==num2)
 {
 printf("no");
 }
 else{
      printf("\n\nyes");
     printf("\n Enter value Again for a New Input\n");
 }
 break;
 
default:
   printf("\nEnter value Valid Operator!!!\n");
   printf("\n\n Enter value Again for a New Input\n");
}
getch();
}
return 0;
}
