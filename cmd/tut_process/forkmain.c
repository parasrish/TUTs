#include <stdio.h>

static int count = 0 ;

int main(void) {
	
	fork();
	fork();
	printf("hello world (%d) \n", ++count);

	return 1;
}

