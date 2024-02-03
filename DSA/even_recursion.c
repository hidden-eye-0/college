#include <stdio.h>
int even(int num) {
    if (num == 0)
        return 0;
    int digit = num % 10;    
    if (digit % 2 == 0) 
        return 1 + even(num / 10);
    else 
        return even(num / 10);
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int count = even(number);
    printf("The number of even digits in %d is %d\n", number, count);    
}
