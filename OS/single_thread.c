#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>

void *thread_function(){
    printf("\n Thread function starting...\n");
    for(int i=0; i<5; i++){
        printf("%d\n", i);
        sleep(2);
    }
}

int main(){
    pthread_t a_thread;
    pthread_create(&a_thread, NULL, thread_function, NULL); // Create the thread
    pthread_join(a_thread, NULL); // It will keep the main function in waiting state until the thread function is executed
    printf("\n Initializing Main Program...\n");
    for(int i=10; i<15; i++){
        printf("%d\n", i);
        sleep(1);
    }
}