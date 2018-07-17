#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main () {
	if (fork() == 0) {
		printf("I am the child process\n");
		printf("Process ID: %d, Parent Process ID: %d\n", getpid(), getppid());
	}
	else {
		printf("I am the parent process\n");
		printf("Process ID: %d", getpid());
		//can pass in int* to receive exit status
		wait(NULL);						//waiting to reap the child process
		//if parent is reaped before child then grandparent takes over for parent	
	}

	return 0;
}
