#include <stdio.h>
#include <limits.h>
int reverse(int num) {
    int reversed = 0;
    while (num != 0) {
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
        return 0;
        }
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}
int main() {
    int num;
    printf("Enter a 32-bit signed integer: ");
    scanf("%d", &num);
    int reversedNum = reverse(num);
    if (reversedNum != 0) {
        printf("Reversed integer: %d\n", reversedNum);
    } else {
        printf("Reversal causes overflow. Cannot reverse the integer.\n");
    }
}

