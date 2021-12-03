// A C program to find factorial of a given number (using recursion).
#include <stdio.h>

// fact() function used to calculate factorial..
int fact (int n) {
    // Base condition is used here to stop the iterations..
    if (n == 0) {
        return 1;
    } 
    // Here fact() function is calling itself again and again. 
    else {
        return n*fact(n-1);
    }
}

void  main () {
    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d",&n);

    // Here the main() function is the caller & fact() function is being called.
    int res = fact(n);
    printf("Factorial of %d is %d.\n",n,res);
}


