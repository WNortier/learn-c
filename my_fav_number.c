#include <stdio.h>
/*
When you clean your project it's basically removing everything, any extra artifacts from your build debug folder - basically all .o files.
Again, it's removing all those dot o's and the executable and you're starting from scratch.
*/

/*
To create a program that you can run: 

1. You have to compile

2. You have to link

3. You have to create a binary

To compile your C program with clang on macOS, use:

clang my_fav_number.c -o my_fav_number

This creates an executable named my_fav_number. To run it, use:

./my_fav_number
*/

/*
Building a C project compiles it, links it and creates the executable. 

So it makes things easier building as opposed to compiling at first.

Take note you can build for debug or build for release. 
You don't want to build for debug when you're releasing because it contains information about your source code.

The Makefile is auto generated depending on your project settings. Sometimes if you have errors you can look at the makefile if something wasnt generated correctly.
*/

int main() {
    int my_fav_number = 0;

    printf("Enter your favorite number: ");

    scanf("%d", &my_fav_number);

    printf("My favorite number is %d\n", my_fav_number);

    return 0;
}
