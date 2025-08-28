#include <stdio.h>

int main() {
    char name[100];
    printf("Hello, what is your name?");
    scanf("%99s", name);
    printf("Hello %s, nice to meet you!", name);
    return 0;
}