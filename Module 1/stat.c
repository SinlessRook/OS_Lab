// Algorithm

// 1. Start
// 2. Input the filename
// 3. Initialize the fileStat structure
// 4. Call stat
// 5. Print the file details
// 6. End


// Code

#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
    struct stat fileStat;
    char filename[256];

    // Get filename from user
    printf("Enter the filename: ");
    scanf("%255s", filename);

    // Get file details
    if (stat(filename, &fileStat) == 0) {
        printf("\nFile: %s\n", filename);
        printf("Size: %ld bytes\n", fileStat.st_size);
        printf("Last modified: %s", fileStat.st_mtime); // Can use ctime() to convert time_t to string
    } else {
        perror("Error retrieving file info");
    }
    
    return 0;
}


// Output
