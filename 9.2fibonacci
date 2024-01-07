// C Program to print Fibonacci Sequence using recursion
#include<stdio.h> 
//Function Declaration
int fibonacci(int); 
// Start of main function
int main(void) {
    int terms;
    //Ask user for the input and store it in terms
    printf("Enter terms: ");
    scanf("%d", &terms);       
    for(int n = 0; n < terms; n++) {
    printf("%d ", fibonacci(n)); //Calling our user defined function
    }
    return 0; 
}
// Function Definition
 int fibonacci(int num) {
    //base condition
    if(num == 0 || num == 1) {
        return num;
    }
    else {
        //Function calling itself: recursion
        return fibonacci(num-1) + fibonacci(num-2);
    }
}