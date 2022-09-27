#include <stdio.h>
#include <stdlib.h>

int main() {
	char name[20];
	printf("What is your name?: ");
	fgets(name, 20, stdin);
	printf("Your name is %s", name);
	
	int age;
	printf("How old are you?: ");
	scanf("%d", &age);
	printf("You are %d years old.\n", age);
	
	return 0;
}
