#include <stdio.h>
#include <stdlib.h>
/*
## Problem 5.4 - Advanced Data Types
- Create a file named `ProblemSet5.4.c`.
- Create an enum that holds keywords: `Ionian`, `Dorian`, `Lydian`, `Mixolydian`, `Aeolian`, and `Locrian`.
- Create a structure named `Scale`. The structure should hold an array of the `Note` structure from the class and an unsigned char named `rootNote`. 
- Prepare seven instances of the `Scale` data type, each corresponding to `Ionian`, `Dorian`, etc. with appropriate pitch intervals (i.e., for Ionian, it should be: 0,2,4,5,7,9,11,12, including the octave.).
- Ask the users to input which scale mode they want. Since we are using enum constants, the input from the user should be in integer data type.
- Ask the users also to input a root note in integer data type.
- Once the scale and root note is chosen, iterate the appropriate array of Notes to print the result of root note + pitch value for each note.
*/

enum Modes {
    Ionian, Dorian, Phrygian, Lydian, Mixolydian, Aeolian, Locrian
};
typedef enum Modes modes;
struct Scale {
     char Note;
unsigned char rootNote;
};
typedef struct Scale scale;



int main(int argc, char *argv[]) {
 
modes askmode;
scale rooot;
scale ionian[] = {0,2,4,5,7,9,11,12};
scale dorian[] =  {0,2,3,5,7,9,10,12};
scale phrygian[] =  {0,1,3,5,7,8,10,12};
scale lydian[] = {0,2,4,6,7,9,11,12};
scale aeolian[] = {0,2,4,5,7,9,10,12};
scale mixlydian[] = {0,2,3,5,7,8,10,12};
scale locrian[] = {0,1,3,5,6,8,10,12};

printf("Which mode? Enter the scale degree: ");
scanf("%d", &askmode);
printf("\n");

printf("Root note: ");
scanf("%c", &rooot);
printf("\n");

printf("MIDI notes: ");

return 0;
}


