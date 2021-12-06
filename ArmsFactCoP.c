// A C program to:
// 1-> Find whether a given number is armstrong or not.
// 2-> Find factorial of a given number.
// 3-> Find whether a number & its reverse is Co-prime or not.
// Also this is Q1 from Ex6(lab manual).
#include <stdio.h>
#include <stdlib.h>

// Function used to find whether a given number is armstrong or not.
void armstrong (int n) {
	int t , sum = 0 , r;
	t = n;
	while (n > 0) {
		r = n%10;
		sum = sum + (r*r*r);
		n = n/10;
	}
	if (t == sum) {
		printf("\nIt is a Armstrong number");
	} else {
		printf("\nIt is not a armstrong number");
	}
}

// Function used to calculate reverse of a number.
int rev(int n) {
	int rem , rev;
	while (n > 0) {
		rem = n%10;
		rev = rev*10 + rem;
		n = n/10;
	}
	return rev;
}

// Program used to find whether the given number is prime or not.
int prime (int n) {
	int r = rev(n);
	int c = 0 , i;
	for (i=2; i<=n/2; i++) {
		if (n%i == 0) {
			c = 1;
			break;
		}
	}
	if (c==0) {
		return 0;
	} else {
		return 1;
	}
}

// Function used to find whether a number & its reverse is Co-prime or not.
void cop (int n) {
	
	int re = rev(n);
	if (prime(n) && prime (re)) {
		printf("\n%d and %d are Co-prime",n,re);
	} else {
		printf("\n%d and %d are Not Co-prime",n,re);
	}
	
} 

// Function used to find factorial of a given number (using recursion).
int fact (int n) {
	if (n == 0 || n == 1) {
		return n;
	} else {
		int f = n*fact(n-1);
		return f;
	}
}

void main () {
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);

// Condition used to repeat the menu again & agin till user doesn't choose to stop.
while (1)
{
	// Menu	
	printf("\n\n\t**MENU**\n");
	printf("1 to find wheter a number is Armstrong or not\n");
	printf("2 to find Factorial of a number\n");
	printf("3 to find wheter the number & its reverse is Co-prime or not\n");
	printf("4 to Exit\n");
	
	int ch;
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	
	// Switch-cases implemented to provide a menu driven outlook & call functions. 	
	switch (ch) {
		case 1: {
			armstrong(n);
			break;
		} 
		case 2: {
			printf("\nFactorial of %d is %d",n,fact(n));
			break;
		}
		case 3: {
			cop (n);
			break;
		} 
		case 4: {
			// Function 'exit(0)' used to stop the menu when user inputs 4. 			
			exit (0); 			
			break;
		}
		default: printf("Wrong choice");
	}
}
}
