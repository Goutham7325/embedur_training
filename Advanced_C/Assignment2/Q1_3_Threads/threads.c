#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int N;

// Function to check prime number
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

// Thread A
void* sumPrimes(void* arg)
{
    int count = 0;
    int num = 2;
    int sum = 0;

    while (count < N)
    {
        if (isPrime(num))
        {
            sum += num;
            count++;
        }

        num++;
    }

    printf("Sum of first %d prime numbers = %d\n", N, sum);

    return NULL;
}

// Thread B
void* thread1(void* arg)
{
    for (int i = 0; i < 50; i++)
    {
        printf("Thread 1 running\n");
        sleep(2);
    }

    return NULL;
}

// Thread C
void* thread2(void* arg)
{
    for (int i = 0; i < 34; i++)
    {
        printf("Thread 2 running\n");
        sleep(3);
    }

    return NULL;
}

int main()
{
    pthread_t t1, t2, t3;

    printf("Enter N: ");
    scanf("%d", &N);

    // Create threads
    pthread_create(&t1, NULL, sumPrimes, NULL);
    pthread_create(&t2, NULL, thread1, NULL);
    pthread_create(&t3, NULL, thread2, NULL);

    // Wait for threads to finish
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);

    printf("All threads completed\n");

    return 0;
}
