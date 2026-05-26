// gcc thread_program.c -o thread_program -lpthread

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>

volatile sig_atomic_t keepRunning = 1;


void signal_handler(int sig)
{
    if (sig == SIGINT)
    {
        printf("\nSIGINT received (Ctrl+C ignored)\n");
    }
    else if (sig == SIGTERM)
    {
        printf("\nSIGTERM received and ignored\n");
    }
}

int isPrime(int num)
{
    if (num < 2)
        return 0;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}


// Finds sum of first N prime numbers
void *threadA(void *arg)
{
    int N = *(int *)arg;

    int count = 0;
    int num = 2;
    long long sum = 0;

    time_t start, end;
    start = time(NULL);

    printf("Thread A started\n");

    while (count < N)
    {
        if (isPrime(num))
        {
            sum += num;
            count++;
        }
        num++;
    }

    end = time(NULL);

    printf("Thread A completed\n");
    printf("Sum of first %d prime numbers = %lld\n", N, sum);
    printf("Thread A execution time = %ld seconds\n\n", end - start);

    pthread_exit(NULL);
}


// Prints every 2 seconds
void *threadB(void *arg)
{
    time_t start, current;
    start = time(NULL);

    printf("Thread B started\n");

    while (1)
    {
        current = time(NULL);

        if ((current - start) >= 100)
            break;

        printf("Thread 1 running\n");
        sleep(2);
    }

    printf("Thread B completed\n");
    pthread_exit(NULL);
}


// Prints every 3 seconds
void *threadC(void *arg)
{
    time_t start, current;
    start = time(NULL);

    printf("Thread C started\n");

    while (1)
    {
        current = time(NULL);

        if ((current - start) >= 100)
            break;

        printf("Thread 2 running\n");
        sleep(3);
    }

    printf("Thread C completed\n");
    pthread_exit(NULL);
}


int main()
{
    pthread_t t1, t2, t3;

    int N;

    printf("Enter value of N: ");
    scanf("%d", &N);

    // Register signal handlers
    signal(SIGINT, signal_handler);
    signal(SIGTERM, signal_handler);

    printf("\nCreating threads...\n\n");

    time_t total_start, total_end;
    total_start = time(NULL);

    // Create threads
    pthread_create(&t1, NULL, threadA, &N);
    pthread_create(&t2, NULL, threadB, NULL);
    pthread_create(&t3, NULL, threadC, NULL);

    // Wait for all threads
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);

    total_end = time(NULL);

    printf("\nAll threads completed\n");
    printf("Total execution time = %ld seconds\n",
           total_end - total_start);

    return 0;
}
