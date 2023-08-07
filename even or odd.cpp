#include <stdio.h>
void checkOddEven(int num) {
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
}
int main() {
    int n;
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        checkOddEven(num);
    }
}
