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
    int Note[8];
unsigned char rootNote;
};
typedef struct Scale scale;

scale ionian;
scale dorian; 
scale phrygian;
scale lydian;
scale mixolydian;
scale aeolian;
scale locrian;



int main(int argc, char *argv[]) {

return 0;
}


