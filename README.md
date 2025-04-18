# OS LAb

## Overview
This repository contains 5 modules . Each module focuses on a specific area, providing efficient solutions for various tasks.

## Table of Contents

### Module 1
#### System Calls
- [Fork](./Module%201/fork.c) 
- [Exec](./Module%201/exec.c) 
- [Getpid](./Module%201/fork.c) 
- [Wait](./Module%201/fork.c) 
- [Exit](./Module%201/fork.c) 
- [Stat](./Module%201/stat.c) 
- [Directory](./Module%201/directory.c) 
### Module 2
- [FCFS](./Module%202/Scheduling%20Algorithms//FCFS.c)
- [SJF](./Module%202/Scheduling%20Algorithms/SJF.c)
- [Round_Robin](./Module%202/Scheduling%20Algorithms/RoundRobin.c)
- [IPC_read](./Module%202/InterProcessCommunication/read.c)
- [IPC_write](./Module%202/InterProcessCommunication/write.c)

### Module 3
- [Bankers_Algorithm](./Module%203/bankersAlgo.c)

### Module 4
- [Best_Fit](./Module%204/Bestfit.c)
- [Worst_Fit](./Module%204/WorstFit.c)
- [First_Fit](./Module%204/FirstFit.c)

## Extra Problems
### Linux commands
-  [BasicLinuxCommands](./Other/BasicLinuxCommands.md)
### Shell Script
##### Conditional Statement
- [Largest_Of_Three_Numbers](./Other/ShellScript/Conditionals/LargestNum.sh)
- [Get_Name_Of_Month](./Other/ShellScript/Conditionals/MonthName.sh)
##### Loops
- [Odd_Numbers](./Other/ShellScript/loops/Odd.sh)
- [Prime_Numbers](./Other/ShellScript/loops/Prime.sh) 
##### String Manipulation
- [Palindrome](./Other/ShellScript/Strings/Palindrome.sh)
- [Vowels](./Other/ShellScript/Strings/Vowel.sh)
##### File Handling
- [Read_Words_Starting_with_A](./Other/ShellScript/File/sample.sh)
## Imported Libraries

| Library       | Purpose                                                         |
|--------------|-----------------------------------------------------------------|
| `#include <stdio.h>`  | Used for standard input/output functions like `printf()` and `scanf()`. |
| `#include <sys/stat.h>` | Provides the `stat` structure and function to get file metadata. |
| `#include <unistd.h>`  | Includes system calls and functions like `stat()`, `fork()`, and `execl()`. |
| `#include <dirent.h>`  | Provides functions to open, read, and close directories. |
| `#include <stdlib.h>`  | Used for memory management, process control, and conversions, `exit()` |
| `#include <sys/wait.h>` | Provides the `wait()` function to synchronize parent and child processes. |
| `#include <stdio.h>`   | Standard input/output functions like printf() and sprintf()|
| `#include <sys/ipc.h>` | Defines IPC mechanisms, including shared memory, contains `ftok()` and `key_t` and `IPC_CREAT`|
| `#include <sys/shm.h>` | Provides functions for shared memory operations, such as `shmget()`, `shmat()`, and `shmdt()`|

## Struct Variables

| Struct | Variable Name | Purpose |
|--------|--------------|---------|
| `struct stat` | `fileStat` | Stores metadata about the file, including size and modification time. |
| `struct dirent` | `entry` | Stores directory entry information while reading directory contents. |

## Compilation & Execution
```sh
gcc file_info.c -o file_info
./file_info
```

```sh
chmod +x ./filname.sh
bash filename.sh
./file_info
```
