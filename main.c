#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{

	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		printf("I am the child \n\n");
		exit(7);
	}
	else
	{
		wait(&status);
		printf("status=%d\n\n",status);
		printf("the father executes his code\n");
		
	}
	
	return 0;
}


	
