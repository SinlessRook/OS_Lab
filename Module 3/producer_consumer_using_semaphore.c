// Algorithm

// 1. 
// 2. 
// 3. 


// Code

#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>
#include<stdlib.h>
#include<stdbool.h>
#include<unistd.h>

#define MAX_PRODUCERS 3
#define MAX_CONSUMERS 3
#define BUFFER_SIZE 5

// Initialisation
sem_t empty,full;
pthread_t consumer[MAX_CONSUMERS],producer[MAX_PRODUCERS];
sem_t mutex;
int in=0,out=0,maximum;
int buffer[BUFFER_SIZE];

// Functions

void* start_production(void* args)
{
    int producer_num = (int)(long)args;
    int max=0;
    while(max!=maximum){
    sem_wait(&empty);
    sem_wait(&mutex);
    int item=rand()%100 + 1;
    printf("Producer %d produced item %d\n",producer_num,item);
    max++;
    buffer[in]=item;
    in=(in+1)%BUFFER_SIZE;
    sleep(2);
    sem_post(&mutex);
    sem_post(&full);
    }
    
}

void* start_consumption(void* args)
{
    int consumer_num = (int)(long)args;
    int max=0;
    while(max!=maximum){
    sem_wait(&full);
    sem_wait(&mutex);
    int item = buffer[out];
    printf("Consumer %d consumed item %d\n",consumer_num,item);
    max++;
    out=(out+1)%BUFFER_SIZE;
    sleep(2);
    sem_post(&mutex);
    sem_post(&empty);}
    
}


void main()
{
    // User Input 
    printf("Enter max item a producer can produce:");
    scanf("%d",&maximum);
    // Declare Semaphore values
    sem_init(&empty,0,BUFFER_SIZE);
    sem_init(&full,0,0);
    sem_init(&mutex,0,1);
    
    // Create Threads
    
    for(int i=0;i<MAX_PRODUCERS;i++)
    {
        pthread_create(&producer[i],NULL,start_production,(void*)(long)(i+1));
    }
    
    for(int i=0;i<MAX_CONSUMERS;i++)
    {
        pthread_create(&consumer[i],NULL,start_consumption,(void*)(long)(i+1));
    }
    
    // Join Thread
    
    for(int i=0;i<MAX_PRODUCERS;i++)
    {
        pthread_join(producer[i],NULL);
    }
    
    for(int i=0;i<MAX_CONSUMERS;i++)
    {
        pthread_join(consumer[i],NULL);
    }
}

// Output
// Enter max item a producer can produce:2
// Producer 1 produced item 84
// Producer 1 produced item 87
// Producer 3 produced item 78
// Producer 3 produced item 16
// Producer 2 produced item 94
// Consumer 3 consumed item 84
// Consumer 3 consumed item 87
// Consumer 1 consumed item 78
// Consumer 1 consumed item 16
// Consumer 2 consumed item 94
// Producer 2 produced item 36
// Consumer 2 consumed item 36
