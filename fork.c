#include <stdio.h>
#include<sys/types.h>
#include <unistd.h>
int main(){
	pid_t pid=fork();
	if(pid==0){
		printf("this is the child process\n");
	}
	else{
		sleep(2);
		printf("this is the parent process\n");
	}
}