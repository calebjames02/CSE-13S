#include <stdio.h>
#include <assert.h>

int for_strlen(const char* p){
	int length = 0;

	for(int i = 0; *p != '\0'; p++){
		length++;
	}

	return length;
}

int my_strlen(const char *p){
	int length = 0;

	while(*p){
		length++;
		p++;
	}

	return length;
}

int main(){
	assert(!'\0');

	printf("my_strlen() of '%s' is %d\n", "", my_strlen(""));
	printf("my_strlen() of '%s' is %d\n", "abc", my_strlen("abc"));
	printf("my_strlen() of '%s' is %d\n\n", "abcdef", my_strlen("abcdef"));

    printf("for_strlen() of '%s' is %d\n", "", for_strlen(""));
    printf("for_strlen() of '%s' is %d\n", "abc", for_strlen("abc"));
    printf("for_strlen() of '%s' is %d\n", "abcdef", for_strlen("abcdef"));

	return 0;
}
