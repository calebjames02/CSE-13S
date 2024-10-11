#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num){
	for(int i = 2; i < num - 1; i++){
		if(num % i == 0){
			return false;
		}
	}

	return true;
}

int main(){
	int count = 0;

	for(int i = 2; i <= 100; i++){
		if(isPrime(i)){
			count += i;
		}
	}

	printf("%d\n", count);

	return 0;
}
