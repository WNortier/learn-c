#include <stdio.h>
/*
When you clean your project it's basically removing everything from your build debug folder.
Again, all those dot o's the executable you're starting from scratch.
*/

int main() {
    int my_fav_number = 0;
    printf("Enter your favorite number: ");
    scanf("%d", &my_fav_number);
    printf("My favorite number is %d\n", my_fav_number);
    return 0;
}
