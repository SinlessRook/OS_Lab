// Algorithm

// 1. Start
// 2. Call opendir
// 3. initialize the directory pointer
// 4. Call readdir
// 5. Print the name of the file
// 6. Call closedir
// 7. End


// Code

#include <dirent.h> 
#include <stdio.h> 
 int main() 
{ 
 DIR *dir = opendir("."); 
 if (dir) {
 struct dirent *entry; 
 printf("Current Directory Contents\n");
 while ((entry = readdir(dir)) != NULL) 
{ 
 printf("%s\n", entry->d_name); 
 } 
 closedir(dir); } 
 return 0; 
}

// Output
