#include <stdio.h>
#include <pthread.h>

void myThread(void* ptr) {
	printf("Hello in thread\n");
	int i=0;	
	for(;i<10;i++)
	{
		sleep(1);
		printf(". ");
		fflush(stdout);
	}
	printf("sleep over now\n");
}

int main(void) {
	pthread_t tid;
	printf("creating a new thread\n");
	pthread_create(&tid, NULL, (void*)myThread, 0);
	printf("going to join with child thread..\n");
	pthread_join(tid, NULL);
	printf("joined..!!\n");
	return 0;
}
