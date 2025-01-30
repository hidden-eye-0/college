#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main() {
    pid_t pid = fork();
    //pid=-1;
    if(pid < 0){
        printf("Failed to fork\n");
    } else if(pid == 0){ 
        printf("Starting child process...");
        execlp("/bin/ls", "ls", NULL);
    } else {
        wait(NULL); // wait for child process to finish
        printf("Child complete...");
    }
}