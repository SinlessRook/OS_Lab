// Algorithm

// 1. Start
// 2. Input the blocks and processes b[n] and p[m]
// 3. iterate i=0 to m
// 4. call findBlock function to find the best fit block
// 5. if block==-1 then print process not allocated
// 6. if block!=-1 then b[block]-=p[i] and print process allocated at block
// 7. Inside findBlock function
//        - set min=-1
//        - iterate j=0 to n
//        - if b[j]>=p[i] then and if min==-1 then set min=j
//        - else if b[j]<b[min] then set min=j
//        - return min
// 8. End

// Code

#include<stdio.h>
#include<stdbool.h>

int findBlock(int b[],int n,int size)
{
    int min=-1;
    for(int i=0;i<n;i++)
    {
        if(b[i]>=size){
            min = min==-1?i:(b[i]<b[min]?i:min);
        }
    }
    return min;
}

void main()
{
    // user input
    
    int nP  = 4;
    int nB  = 5;
    
    int blockSize[] = {100, 500, 200, 300, 600};
    int processSize[] = {212, 417, 112, 426};
    
    // Best Fit Algorithm
    
    for(int i=0;i<nP;i++)
    {
        int block = findBlock(blockSize,nB,processSize[i]);
        if(block==-1)
        {
            printf("Process %d not allocated\n",i+1);
        }
        else
        {
            blockSize[block]-=processSize[i];
            printf("Process %d allocated at Block No %d\n",i+1,block+1);
        }
    
    }
    
}

// Output
// Process 1 allocated at Block No 4
// Process 2 allocated at Block No 2
// Process 3 allocated at Block No 3
// Process 4 allocated at Block No 5