#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, rem, n = 0;
    float result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;

    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }
    originalNum = num;

    while (originalNum != 0) {
        rem = originalNum % 10;
        result += pow(rem, n);
        originalNum /= 10;
    }

    if ((int)result == num) {
        printf("%d is an Armstrong number.", num);
    }
    else {
        printf("%d is not an Armstrong number.", num);
    }

    return 0;
}
