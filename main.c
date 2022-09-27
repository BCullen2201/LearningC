#include <stdio.h>
#include <stdlib.h>

int main() {
	// Getting user input
	char name[20];
	printf("What is your name?: ");
	fgets(name, 20, stdin);
	printf("Your name is %s", name);
	
	int age;
	printf("How old are you?: ");
	scanf("%d", &age);
	printf("You are %d years old.\n", age);
	
	// Very basic calculator
	int num1;
	int num2;
	
	printf("Enter first number: ");
	scanf("%d", &num1); // I'm not sure what a pointer is yet, but I guess I need them to use scanf to store ints in a variable?
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	printf("Answer: %d\n", num1 + num2);
	
	// Find circumference of a circle
	const double pi = 3.14;
	int radius;
	printf("Enter radius of circle(inches): ");
	scanf("%d", &radius);
	printf("The circumference of this circle is %f inches\n", 2 * pi * radius);
	
	return 0;
}
