#include <stdio.h>

int main(){

	int pid = fork();
     	if(pid == 0){
            printf("In child : my process id is %d \n",getpid());
		sleep(10);
	    printf("child is out of sleep now..\n");
	}
      	else{

            printf("in parent : my process id = %d ++ child pid = %d\n",getpid(),pid);
		int i=0;
		printf("waiting for the child here..\n");
		waitpid(pid,1,0); ///this is to avoid zombie creation (not required to stay, until completion of main-process)
		printf("wait fo child over...\n"); 
		for(; i<10 ; i++)
			sleep(1);
	    printf("parent out of sleep...\n");
	}
	return 1;
}
