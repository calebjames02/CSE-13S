#include <stdio.h>

int main(){
	int a[5] = {0, 1, 2, 3, 4};
	int *p = a + 2;

	printf("%d\n", p[-1]);

	return 0;
}
