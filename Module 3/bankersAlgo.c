// Algorithm

// 1. 
// 2. 
// 3. 


// Code

#include<stdio.h>
#include<stdbool.h>

#define maxProcess 5
#define maxResources 3

int available[maxResources];
int max[maxProcess][maxResources];
int allocated[maxProcess][maxResources];
int need[maxProcess][maxResources];
int finish[maxProcess];

bool canProcessComplete(int process,int nR)
{
	for(int i=0;i<nR;i++)
	{
		if(need[process][i]>available[i])
		{
			return false; 
		}
	}
	return true;
}

void calculateNeed(int nP,int nR)
{
	for(int i=0;i<nP;i++)
	{
		for(int j=0;j<nR;j++)
		{
			need[i][j] = max[i][j]-allocated[i][j];
		}
	}
}

bool isSafe(int nP,int nR)
{
	// Initialisation
	int work[maxResources];
	bool finish[maxProcess]={false};
	int count=0;
	bool found,flag;
	
	// Copy to work
	for (int i = 0; i < nR; i++) {
        work[i] = available[i];
    	}
	
	// Check for Process
	while(count<nP)
	{
		found=false;
		for(int i=0;i<nP;i++)
		{
			if(!finish[i])
			{
				flag=true;
				for(int j=0;j<nR;j++)
				{
					if(need[i][j]>work[j])
					{
						flag=false;
						break;
					}	
				}
				
				if(flag)
				{
				  	printf("Available Resources");
                    		  	for (int k = 0; k < nR; k++){printf("-%d",work[k]);} 
					printf("\nprocess-p%d can be allocated resources\n",i); 
					for (int j = 0; j <nR ; j++) {
                        			work[j] += allocated[i][j];}
                        		finish[i]=true;
                        		count++;
                        		found=true;
                        		break;	
				}
			}
		}
	if(!found)
	{
		return false;
	}
	}
	return true;	
}

void bankers(int nP,int nR)
{
	if (isSafe(nP,nR)) {printf("Safe state, allocating resources...\n");} 
	else {printf("Unsafe state, cannot allocate resources. Possible deadlock.\n");
    }
}

void main()
{
	// Initialise Required Variables
	
	int nP = 5;
	int nR = 3;
	
	available[0]=3;
	available[1]=3;
	available[2]=2;
	
	max[0][0] = 7; max[0][1] = 5; max[0][2] = 3;
    	max[1][0] = 3; max[1][1] = 2; max[1][2] = 2;
    	max[2][0] = 9; max[2][1] = 0; max[2][2] = 2;
    	max[3][0] = 2; max[3][1] = 2; max[3][2] = 2;
    	max[4][0] = 4; max[4][1] = 3; max[4][2] = 3;
    	
    	allocated[0][0] = 0; allocated[0][1] = 1; allocated[0][2] = 0;
    	allocated[1][0] = 2; allocated[1][1] = 0; allocated[1][2] = 0;
    	allocated[2][0] = 3; allocated[2][1] = 0; allocated[2][2] = 2;
    	allocated[3][0] = 2; allocated[3][1] = 1; allocated[3][2] = 1;
    	allocated[4][0] = 0; allocated[4][1] = 0; allocated[4][2] = 2;
    	
    	// Calculate the Need Matrix
    	
    	calculateNeed(nP,nR);
    	
    	// DeadLock Avoidance
    	bankers(nP,nR);
}

// Output
