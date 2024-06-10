Pipex Project
Overview

Welcome to the Pipex Project repository! This project is a part of the 42 curriculum, designed to deepen understanding of UNIX mechanisms, specifically focusing on pipes. By working on this project, I have gained practical experience with inter-process communication and the complexities of system calls in C.
Project Name

pipex
Objective

The primary objective of this project is to replicate the behavior of a shell pipeline command within a custom program. This involves connecting the output of one process to the input of another, effectively simulating the UNIX pipe operator (|).
Description

In the Pipex Project, the task is to develop a program that executes commands and connects their inputs and outputs using pipes. The program should emulate the behavior of the following shell command:

sh

< file1 cmd1 | cmd2 > file2

When executed as:

sh

./pipex file1 cmd1 cmd2 file2

Mandatory Part Details
Program Requirements

    Program Name: pipex
    
    Turn-in Files: Makefile, *.h, *.c
    
    Makefile Rules: NAME, all, clean, fclean, re
    
    Arguments: file1 cmd1 cmd2 file2
    
    External Functions:
        open, close, read, write
        malloc, free, perror, strerror
        access, dup, dup2, execve
        exit, fork, pipe, unlink
        wait, waitpid
        ft_printf and any equivalent functions coded by me
        
    Libft Authorized: Yes

Program Execution

The program takes four arguments:

    file1 and file2 are file names.
    cmd1 and cmd2 are shell commands with their parameters.

The program executes cmd1 with file1 as input, passes its output to cmd2, and writes the final output to file2.
Examples

    Example command:

    sh

$> ./pipex infile "ls -l" "wc -l" outfile

Should behave like:

sh

< infile ls -l | wc -l > outfile

Example command:

sh

$> ./pipex infile "grep a1" "wc -w" outfile

Should behave like:

sh

    < infile grep a1 | wc -w > outfile

Requirements

The project adheres to the following requirements:

    Makefile: The Makefile compiles the source files without relinking.
    Error Handling: Errors are handled thoroughly to avoid unexpected quits (e.g., segmentation faults, bus errors, double free, etc.).
    Memory Management: The program does not have memory leaks.
    Behavior: The program handles errors similarly to the shell command:

    sh

    < file1 cmd1 | cmd2 > file2

Technical Considerations

    Global Variables: Declaring global variables is forbidden.
    Helper Functions: Helper functions are defined as static to limit their scope to the appropriate file.
    File Placement: All files are placed at the root of the repository.
    Compilation Flags: Every .c file compiles with the flags -Wall -Wextra -Werror.

Learning Experience

Through this project, I have enhanced my understanding of several key concepts:

    Inter-Process Communication: Learning how processes communicate and pass data to each other using pipes.
    System Calls: Gaining practical experience with essential system calls like fork, execve, pipe, and dup2.
    Error Handling: Implementing robust error handling to ensure the program runs smoothly without unexpected quits.
    Memory Management: Ensuring all dynamically allocated memory is properly managed to avoid leaks.
    Makefile Proficiency: Writing a comprehensive Makefile to automate the build process and ensure the program compiles correctly.

