#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
## Problem 5.1 - Pointers
- Create a file named `ProblemSet5.1.c`.
- Write a function that calculates the length of string. (*Hint: How does a string terminate?)
- A function should take string as an argument and return an integer type representing the length of the string.
- Do not use the `strlen()` function included in `string.h`.
- Test and print out the result of your function in the `main()` function.
- Get the input string from the user using the `scanf()` function before passing it to your function.
*/

int calcLength(char* locstr) {
//checking to see if string is null
    if(locstr == NULL){
        printf("no string");
        return 0;
    }//incrementing array counter
    int i = 0;
    while(locstr[i] != '\0'){
        i++;
    }
    return i;
}

int main(int argc, char *argv[]) {

    char myword[100];

    printf("Enter a string: ");
    scanf("%s", myword);
  //  printf("\nYou've entered: %s. The strlen is %ld.\n", myword, strlen(myword));

   printf("\nYou've entered: %s. The calcLength is %d.\n", myword, calcLength(myword));

    return 0;
}
