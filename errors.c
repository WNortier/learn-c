/*
There are two kinds of compiler errors:

SYNTAX ERRORS - something wrong with the structure
- Missing semicolon (int x = 5)
- printf("Missing quotation);

SEMANTIC ERRORS - something wrong with the meaning
- When it doesn't make sense to add a + b for example

C will mainly find syntax errors, less so semantic errors.
*/

#include <stdio.h> // miss spelling results in No such file or directory

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Error: No arguments provided\n");
        return 1;
    }
    return 0;
}

/*

LINKER ERRORS

Linker errors occur during the linking phase of compilation, when the compiler is unable to find the definition of a function or variable that has been declared but not defined. 
For example, an out of scope variable may cause a linker error.

Usually there is a library or object file that is missing from the linking process.

*/

/*

RUNTIME ERROS

Errors that occur when the program is executing

Some typical runtime errors include:

- Division by zero
- Null pointer dereference
- Array out of bounds access
- File not found
- Out of memory

Causes program to 'crash'

*/

/*
LOGIC ERRORS

Errors in the logic of the program that lead to incorrect results
These are mistakes made by the programmer

You should only be able to vote if you are 18 and older but... 

if (age > 18) {
    printf("You may vote!");
}
    
*/