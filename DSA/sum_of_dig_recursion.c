#include<stdio.h>
int sumofdigits(int n)
{
    int sum=0;
    if (n!=0)
    {
        return sum = (n%10 + sumofdigits(n/10));
    }
    else
    {
        return 0;
    }
}
void main()
{
    int num;
    printf("\n Enter a number: ");
    scanf("%d",&num);
    printf("The sum of all digits in the given number is  %d",sumofdigits(num));
}