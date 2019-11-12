# C - File I/O

## File descriptor

In Unix and related computer operating systems, a file descriptor (FD, less frequently fildes) is an abstract indicator (handle) used to access a file or other input/output resource, such as a pipe or network socket. File descriptors form part of the POSIX application programming interface. A file descriptor is a non-negative integer, generally represented in the C programming language as the type int (negative values being reserved to indicate "no value" or an error condition).

|Integer value   |Name|Symbolic constant|<stdio.h>file stream|
|---|---|---|---|
|0|Standard input|STDIN_FILENO|stdin|
|1|Standard output|STDOUT_FILENO|stdout|
|2|Standard error|STDERR_FILENO|stderr|

![File descriptor](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f8/File_table_and_inode_table.svg/1920px-File_table_and_inode_table.svg.png)