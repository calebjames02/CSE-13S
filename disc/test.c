#include <stdio.h>

int main(){
	int i = 0;
	int max = 0;

	while(i <= 100){
		if((i % 3 == 0 || i % 7 == 0) && (i % 3) ^ (i % 7)){
			max = i;
		}

		i++;
	}

	printf("%d\n", max);

	return 0;
}
