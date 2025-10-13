#include<stdio.h>
int main()
{
float b = 1000.00;
float d,w;
int choice;
while(1)
{
printf("1.account balance\n");
printf("2.amount deposit\n");
printf("3.amount withdrawal\n");
printf("4.exit");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
        printf("current balance=%.2f\n",b);
        break;
case 2:
        printf("enter the deposit amount\n");
        scanf("%f",&d);
       if(d>0)
{
        b=b+d;
        printf("current balance=%.2f\n",b);
}    else
     {printf("please enter valid deposit , it should be positive amount\n");} 
        break;
case 3:
       printf("enter the withdrawal amount\n");
       scanf("%f",&w);
      if(w>0 && w<b)
{
       b=b-w;
       printf("current balance=%.2f\n",b);
} else
       {printf("please enter valide amount,your current balance is=%.2f\n",b);}
       break;
case 4:
      printf("thank you for banking with us\n");
      break;
default:
       printf("invalid choice , please enter the valid choice\n");
}
if(choice==4)
{
        break;

}}

return 0;

}
