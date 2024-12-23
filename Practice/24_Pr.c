#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 5

void* threadFunction(void* arg) {
    int threadId = *((int*)arg);
    printf("Thread %d is running.\n", threadId);
    free(arg); // Free dynamically allocated memory
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];

    for (int i = 0; i < NUM_THREADS; i++) {
        int* arg = malloc(sizeof(*arg)); // Allocate memory for argument
        if (!arg) {
            perror("malloc");
            exit(EXIT_FAILURE);
        }
        *arg = i;
        if (pthread_create(&threads[i], NULL, threadFunction, arg)) {
            perror("pthread_create");
            exit(EXIT_FAILURE);
        }
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("All threads completed.\n");
    return 0;
}
