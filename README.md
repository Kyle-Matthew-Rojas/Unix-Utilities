# Assignment 2

## Unix Utilities
In this project, you'll build three UNIX utilities, simple versions of commonly used commands. These commands are cat, wc, and grep. You will append the prefix my_ to your implementation to create three .c files for each of the utilities : **my_cat.c**, **my_wc.c**, and **my_grep.c**. Each should compile successfully when compiled with **-Wall** and **-Werror** flags.

### Programming Task 1:  10 points

Develop a C program called **my_cat.c** that emulates the primary functionality of the Unix tool **cat**. Specifications for **my_cat** are as follows:

- **my_cat** reads a text file as specified by the user and prints its contents exactly as is.
- **my_cat** can be invoked with one or more files on the command line; it should just print out each file in turn.
- In all non-error cases, my_cat should exit with status code 0, usually by returning a 0 from main() (or by calling exit(0)).
  - If no files are specified on the command line, my_cat should just exit and return 0. 
  - Note that this is slightly different than the behavior of normal UNIX cat (if you'd like to, figure out the difference).
- If the program tries to read a file and fails, it should print the exact message "my_cat: cannot open file" (followed by a newline) and exit with a status of code 1. 
- If multiple files are specified on the command line, the files should be printed out in order until the end of the file list is reached or an error opening a file is reached (at which point the error message is printed and my_cat exits).

### Programming Task 2: 10 points

Implement a C program called **my_wc.c** that emulates the primary functionalities of the UNIX tool **wc**. Specifications for **my_wc** are as follows:

- Your program **my_wc** reads text file as specified by the user, counts the number of lines, words, and characters within the files based on the options (or the lack thereof), and prints out the values of each file on a single line, with each value separated by a single white space. The name of that file is printed out at the end of that line, separated by a single white space. 
- If **my_wc** is passed with no command-line arguments, it should print "my_wc: [option ...] [file ...]" (followed by a newline) and exit with status 1.
- If **my_wc** encounters a file that it cannot open, it should print "my_wc: cannot open file" (followed by a newline) and exit with status 1.
- There are three possible options for **my_wc**: -l, -w, and -c. The options represent the number of lines, words, and characters, respectively. 
  - If **my_wc** is invoked without any option, all three will be printed out in the order of lines, words, and characters, respectively. 
  - If **my_wc** is invoked with any combination of options (maximum of three and the options cannot be repeated), the corresponding numbers will be printed out (in the order of line, word, and character, regardless of how the options are ordered in the command line). 
  - If the options are passed incorrectly (more than three options  or repeated options), **my_wc** should print "my_wc: [option ...] [file ...]" (followed by a newline) and exit with status 1.
- Your program my_wc can be invoked with one or more files on the command line; it should just print out the results of each file on a single line. The options will be applied to all files. 


## Programming Task 3: 15 points

Implement a C program called **my_grep.c**,  that emulates the functionalities of the UNIX tool **grep**. This tool looks through a text file, line by line, trying to find a user-specified search term in the line. If a line has the word within it, the line is printed out, otherwise it is not.

Here is how a user would look for the term foo in the file bar.txt:

```
$ ./my_grep foo bar.txt
```

this line has foo in it
so does this foolish line; do you see where?
even this line, which has bar food in it, will be printed.

Additional specifications for **my_grep** are as follows:

- The program my_grep is always passed a search term and zero or more files to grep through (thus, more than one is possible). 
  - It should go through each line and see if the search term is in it; if so, the line should be printed, and if not, the line should be skipped.
- The matching is case sensitive. Thus, if searching for *foo*, lines with *Foo* will not match.
- Lines can be arbitrarily long (that is, you may see many many characters before you encounter a newline character, \n). 
  - **my_grep** should work as expected even with very long lines. 
  - For this, you might want to look into the getline() library call (instead of fgets()), or roll your own.
- If my_grep is passed no command-line arguments, it should print "my_grep: searchterm [file ...]" (followed by a newline) and exit with status 1.
- If my_grep encounters a file that it cannot open, it should print "my_grep: cannot open file" (followed by a newline) and exit with status 1.
- In all other cases, my_grep should exit with return code 0.
- For simplicity, if passed the empty string as a search string, my_grep should match ALL lines.




