#include<stdio.h>
int main(){
    int  i = 2, isPrime = 1;
    long int num;
    printf("Enter a number: ");
    scanf("%ld", &num);
    
    while (i * i <= num) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }
    
    if (isPrime) {
        printf("%d is a prime number\n", num);
    } 
    else {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
