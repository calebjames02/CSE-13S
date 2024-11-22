#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	printf("Enter a number: ");

	int num;
	scanf("%d", &num);

	int low_nibble = num & 0x0f;
	int high_nibble = num >> 4;

	printf("Low nibble: %x\n", low_nibble);
	printf("High nibble: %x\n", high_nibble);

	int byte = (low_nibble << 4) | high_nibble;

	printf("Swapped nibbles: %d\n", byte);
	printf("Swapped nibbles hex: %x\n", byte);

	return 0;
}
