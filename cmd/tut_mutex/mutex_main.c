#include <stdio.h>
#include <pthread.h>

void in_progress_feedback(int);

int global = 0;
pthread_mutex_t mutex;
void *compute(void *arg) {

	pthread_t ptid = pthread_self();
	printf("ptid : %08x \n", (int)ptid);	

	int i;
	int lock_ret = 1;	
	do{
		
		lock_ret = pthread_mutex_trylock(&mutex);
		if(lock_ret){
			printf("lock failed(%08x :: %d)..attempt again after 2secs..\n", (int)ptid,  lock_ret);
			sleep(2);
//			fflush(stdout);
//			continue;
		}else{	//ret =0 is successful lock
			printf("lock success(%08x :: %d)..\n", (int)ptid, lock_ret);
//			fflush(stdout);
			break;
		}

	} while(lock_ret);

    	for (i = 0; i < 10*10 ; i++) 
		global++;

	//do some stuff here
	in_progress_feedback(10);

	lock_ret = pthread_mutex_unlock(&mutex);
	printf("unlocked(%08x :: %d)..!\n", (int)ptid, lock_ret);

     return NULL;
}

void in_progress_feedback(int prog_delay){

	int i=0;
	for(;i<prog_delay;i++){
	printf(". ");
	sleep(1);
	fflush(stdout);
	}
	
	printf("\n");
	fflush(stdout);
}

int main(void)
{
	pthread_t tid0,tid1;
	pthread_mutex_init(&mutex, NULL);
	pthread_create(&tid0, NULL, compute, NULL);
	pthread_create(&tid1, NULL, compute, NULL);
	pthread_join(tid0, NULL);
	pthread_join(tid1, NULL);
	printf("global = %d\n", global);
	pthread_mutex_destroy(&mutex);
          return 0;
}

