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
## Extra Problems
### Linux commands
-  [BasicLinuxCommands](./Other/BasicLinuxCommands.md)
### Shell Script
##### Conditional Statement
- [Largest_Of_Three_Numbers](./Other/ShellScript/Conditionals/LargestNum.sh)
- [Get_Name_Of_Month](./Other/ShellScript/Conditionals/MonthName.sh)
##### Loops
##### String Manipulation
##### File Handling

## Imported Libraries

| Library       | Purpose                                                         |
|--------------|-----------------------------------------------------------------|
| `#include <stdio.h>`  | Used for standard input/output functions like `printf()` and `scanf()`. |
| `#include <sys/stat.h>` | Provides the `stat` structure and function to get file metadata. |
| `#include <unistd.h>`  | Includes system calls and functions like `stat()`, `fork()`, and `execl()`. |
| `#include <dirent.h>`  | Provides functions to open, read, and close directories. |
| `#include <stdlib.h>`  | Used for memory management, process control, and conversions. |
| `#include <sys/wait.h>` | Provides the `wait()` function to synchronize parent and child processes. |

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