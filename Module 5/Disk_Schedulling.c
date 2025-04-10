// Algorithm

// 1. 
// 2. 
// 3. 


// Code

#include<stdio.h>

int FCFS(int r[], int n, int head);
int SCAN(int r[], int n, int head, int max, int min);
int CSCAN(int r[], int n, int head, int max, int min);
void bubblesort(int p[],int n);
int locate(int r[], int n, int head);

void main()
{
    // User input
    int n, head, max, min;     
    printf("Enter the number of request:");
    scanf("%d", &n);
    printf("Enter the head position:");
    scanf("%d", &head);
    printf("Enter the max disk size:");
    scanf("%d", &max);
    printf("Enter the min disk size:");
    scanf("%d", &min);
    
    int request[n];
    
    for(int i = 0; i < n; i++)
    {
        printf("req %d:", i+1);
        scanf("%d", &request[i]);
    }
    printf("FCFS Total seek time: %d\n", FCFS(request, n, head));
    printf("SCAN Total seek time: %d\n", SCAN(request, n, head, max, min));
    printf("C-SCAN Total seek time: %d\n", CSCAN(request, n, head, max, min));
}

void bubblesort(int p[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
                int temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
}

int locate(int r[], int n, int head)
{
    for(int i = 0; i < n; i++)
    {
        if(r[i] > head)
            return i;
    }
    return n;
}

int FCFS(int r[], int n, int head)
{
    int seek = 0, seektime;
    for(int i = 0; i < n; i++)
    {
        seektime = abs(r[i] - head);
        seek += seektime;
        head = r[i];
    }
    return seek;
}

int SCAN(int r[], int n, int head, int max, int min)
{
    int seek = 0;
    bubblesort(r, n);
    
    int index = locate(r, n, head);
    
    // Moving towards max (right)
    for(int i = index; i < n; i++)
    {
        seek += abs(r[i] - head);
        head = r[i];
    }
    if(head != max)
    {
        seek += abs(max - head);
        head = max;
    }
    
    // Moving back towards min (left)
    for(int i = index - 1; i >= 0; i--)
    {
        seek += abs(r[i] - head);
        head = r[i];
    }
    
    if(head!=min)
    {
        seek+=abs(head-min);
    }
    
    return seek;
}

int CSCAN(int r[], int n, int head, int max, int min)
{
    int seek = 0;
    bubblesort(r,n);
    
    int index = locate(r, n, head);
    
    // Moving towards max (right)
    for(int i = index; i < n; i++)
    {
        seek += abs(r[i] - head);
        head = r[i];
    }
    if(head != max)
    {
        seek += abs(max - head);
        head = max;
    }
    
    // Jump to min and continue moving right
    seek+=abs(max-min);
    head = min;
    
    for(int i = 0; i < index; i++)
    {
        seek += abs(r[i] - head);
        head = r[i];
    }
    
    return seek;
}

// Output

// Enter the number of request:5
// Enter the head position:50
// Enter the max disk size:100
// Enter the min disk size:0
// req 1:20
// req 2:60
// req 3:10
// req 4:80
// req 5:40
// FCFS Total seek time: 230
// SCAN Total seek time: 150
// C-SCAN Total seek time: 190
