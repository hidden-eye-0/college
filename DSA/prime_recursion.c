#include <stdio.h>
int isPrime(int num, int i)
{
    if (i == 1)
        return 1;
    else
    {
        if (num % i == 0)
            return 0;
        else
            return isPrime(num, i - 1);
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1)
        printf("%d is not a prime number.\n", num);
    else
    {
        int result = isPrime(num, num / 2);
        if (result == 1)
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }
}