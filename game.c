#include <stdio.h>
#include <stdlib.h>

int main() {
	// Mad Libs style game
	char color[20];
	char pluralNoun[20];
	char adjective[20];
	char pluralNoun2[20];
	char firstName[20];
	char lastName[20];
	
	printf("Enter a color: ");
	scanf("%s", color);
	printf("Enter a plural noun: ");
	scanf("%s", pluralNoun);
	printf("Enter a adjective: ");
	scanf("%s", adjective);
	printf("Enter a plural noun: ");
	scanf("%s", pluralNoun2);
	printf("Enter your first and last name: ");
	scanf("%s%s", firstName, lastName);
	
	printf("Roses are %s,\n", color);
	printf("%s are %s,\n", pluralNoun, color);
	printf("I love %s %s\n", adjective, pluralNoun2);
	printf("A poem by %s %s\n", firstName, lastName);
	
	return 0;
}
