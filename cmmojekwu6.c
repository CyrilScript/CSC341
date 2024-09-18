#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int sum; /* this data is shared by the thread(s) */
void *runner(void *param); /* threads call this function */

int main() {
    pthread_t tid; /* the thread identifier */
    pthread_attr_t attr; /* set of thread attributes */
    int upper;

    /* Ask for input from the user */
    printf("Enter a number: ");
    scanf("%d", &upper);

    /* set the default attributes of the thread */
    pthread_attr_init(&attr);

    /* create the thread */
    pthread_create(&tid, &attr, runner, &upper);

    /* wait for the thread to exit */
    pthread_join(tid, NULL);

    printf("sum = %d \n", sum);
    return 0;
}

/* The thread will execute in this function */
void *runner(void *param) {
    int i, upper = *((int*)param); // Access the value passed from the main function
    sum = 0;

    for (i = 1; i <= upper; i++) {
        sum += i;
    }

    pthread_exit(0);
}

