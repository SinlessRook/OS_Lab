// Algorithm

// 1. Start
// 2. Pass the path of the program to be executed
// 3. Specify the arguments to be passed to the program
// 4. End


// Code

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() {
        execl("/bin/ls", "ls", "-l", NULL); // Program Path , varible length String array , Null
        perror("execl");
        exit(EXIT_FAILURE);
    return 0;
}


// Output
