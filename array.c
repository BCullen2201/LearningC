#include <stdio.h>
#include <stdlib.h>

int main() {
	int luckyNumbers[] = {4, 8, 15, 16, 24, 42};
	luckyNumbers[5] = 200;
	
	printf("%d\n", luckyNumbers[5]); // Learned that trying to append an element to the array causes an overflow
	
	return 0;
}
