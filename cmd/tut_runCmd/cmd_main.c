#include <stdio.h>

int main() {

 	int ret = fork();
   	if(ret == 0)
   	{
       		char *params[4]  = {"/bin/ls", "-l",0}; //-- to be filled

       		int res = execv( "/bin/ls" , params);  //-- to be filled 
       		printf("\n child exiting (%d) .. \n", res);
    	}
    	else
    	{
     		waitpid(ret,1,0);
     		printf("parent exiting\n");
   	}

	return 1;
 }

