Pipex Project

This project is a part of the 42 curriculum, designed to deepen understanding of UNIX mechanisms. By working on this project, I have gained practical experience with inter-process communication and the complexities of system calls in C.

The primary objective of this project is to replicate the behavior of a shell pipeline command within a custom program. This involves connecting the output of one process to the input of another, effectively simulating the UNIX pipe operator (|).

 The program should emulate the behavior of the following shell command:

sh

< file1 cmd1 | cmd2 > file2

When executed as:

sh

./pipex file1 cmd1 cmd2 file2


The program takes four arguments:

    file1 and file2 are file names.
    cmd1 and cmd2 are shell commands with their parameters.

The program executes cmd1 with file1 as input, passes its output to cmd2, and writes the final output to file2.
Examples

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


Technical Considerations

    Global Variables: Declaring global variables is forbidden.
    Helper Functions: Helper functions are defined as static to limit their scope to the appropriate file.
    File Placement: All files are placed at the root of the repository.
    Compilation Flags: Every .c file compiles with the flags -Wall -Wextra -Werror.

