// Algorithm

// 1. Start
// 2. Input the block size and process size b[n] and p[m]
// 3. iterate i=0 to m
// 4. iterate j=0 to n
// 5. if p[i]<=b[j] then set allocate=true, b[j]-=p[i] and break the loop
// 6. if allocate=false then print process not allocated
// 7. End


// Code

#include<stdio.h>
#include<stdbool.h>

void main()
{
    // user input
    
    int nP  = 4;
    int nB  = 5;
    
    int blockSize[] = {100, 500, 200, 300, 600};
    int processSize[] = {212, 417, 112, 426};
    bool allocated    = false;
    
    // First Fit Algorithm
    
    for(int i=0;i<nP;i++)
    {
        allocated=false;
        for(int j=0;j<nB;j++)
        {
            if(processSize[i]<=blockSize[j])
            {
                blockSize[j]-=processSize[i];
                printf("Process %d allocated at Block No %d\n",i+1,j+1);
                allocated=true;
                break;
            }
        }
        if(!allocated)
        {
            printf("Process %d not allocated\n",i+1);
        }
    }
    
}

// Output
// Process 1 allocated at Block No 2
// Process 2 allocated at Block No 5
// Process 3 allocated at Block No 2
// Process 4 not allocated