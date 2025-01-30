// here both the thread will start executing simultaneously
// but execution order can't be determined coz of thred scheduling
// If sleep() is not used you can't see the difference between them

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>

void *thread_function(){
    printf("\n 1st Thread function starting...\n");
    for(int i=0; i<5; i++){
        sleep(1);
        printf("%d\n", i);
    }
    return NULL;
}

void *thread_function2(){
    printf("\n 2nd Thread function starting...\n");
    for(int i=20; i<25; i++){
        sleep(1);
        printf("%d\n", i);
    }
    return NULL;
}


int main(){
    pthread_t a_thread, b_thread;
    pthread_create(&a_thread, NULL, thread_function, NULL); // Create the thread
    pthread_create(&b_thread, NULL, thread_function2, NULL);
    pthread_join(a_thread, NULL); // It will keep the main function in waiting state until the thread function is executed
    pthread_join(b_thread, NULL);
    printf("\n Initializing Main Program...\n");
    for(int i=10; i<15; i++){
        printf("%d\n", i);
        sleep(1);
    }
}