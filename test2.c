#include <stdio.h>

int main(){
	char c[] = "abc";
	char *p = c;
	char *q = c;

	printf("%d\n", p);
	printf("%d\n", q);

	return 0;
}
