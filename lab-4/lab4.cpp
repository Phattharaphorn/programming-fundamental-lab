#include<stdio.h>
int main ()
{
   int num1 , num2 , gcd;
    scanf("%d %d" , &num1 , &num2);
    printf("Enter frist number : %d\nEnter srcond numder : %d\n",num1 ,num2);
    for (int i = 1 ; i <= num1 && i <= num2 ; ++i)
    {
        if (num1 % i == 0 && num2 % i == 0)
        gcd = i; 
    }
    printf("Greatest common divisor = %d",gcd);
    
    return 0;
}