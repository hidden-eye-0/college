#include <stdio.h>

int is_palindrome(int num) {
    int original = num;
    int reverse = 0;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    return original == reverse;
}

void find_palindrome_pairs(int n, int m) {
    if (n >= m) {
        return;
    }

    for (int i = n; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            if (is_palindrome(i) && is_palindrome(j)) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    find_palindrome_pairs(n + 1, m);
}

int main() {
    int n = 10;
    int m = 100;
    
    printf("Palindrome pairs in the range (%d, %d):\n", n, m);
    find_palindrome_pairs(n, m);

    return 0;
}
