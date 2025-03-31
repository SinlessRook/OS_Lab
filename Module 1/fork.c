// Algorithm

// 1. Start
// 2. Call Fork System Call
// 3. Check the return value
// 4. If the return value is negative, it is an error
// 5. If the return value is 0, it is the child process
// 6. If the return value is not 0, it is the parent process
// 7. End


// Code

#include<stdio.h> // for printf, perror
#include<stdlib.h> // for exit
#include<unistd.h> // for fork
#include<sys/wait.h> // for wait
int main()
{
    int f;
    f=fork();
    if(f<0)
    {
        perror("Fork Creation Failed");
        exit(1);
    }
    else if(f==0)
    {
        printf("Hello from Child(%d) created by %d\n",getpid(),getppid());
    }else
    {
        wait(NULL); //This will wait for the child process to complete
        printf("Hello from parent %d\n",getpid());
    }
}

// Output

// Hello from Child(13919) created by 13918
// Hello from parent 13918
