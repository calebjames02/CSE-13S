#include <stdio.h>
#include <stdlib.h>

int main(){
	srand(1);
	int r1 = 0;
	int r2 = 0;
	int r3 = 0;

	while((r1 + r2 + r3) != 10){
		r1 = rand() % 6 + 1;
		r2 = rand() % 6 + 1;
		r3 = rand() % 6 + 1;

		printf("Roll 1: %d\n", r1);
		printf("Roll 2: %d\n", r2);
		printf("Roll 3: %d\n", r3);
		printf("Sum = %d\n\n", r1 + r2 + r3);
	}

	return 0;
}
