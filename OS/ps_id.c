#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();  // creates child process
    if (pid < 0)
        printf("Fork failed!\n");
    else if (pid == 0) // child process
        printf("Hello from Child Process! PID: %d\n", getpid());
    else // parent process
        wait(NULL); // parent ps waits for child process to complete
        printf("Hello from Parent Process! PID: %d, Child PID: %d\n", getpid(), pid);
    return 0;
}
