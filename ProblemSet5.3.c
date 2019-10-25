#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
## Problem 5.3 - Memory Management
- Create a file named `ProblemSet5.3.c`.
- Write a program that opens "num.csv" and counts the comma-separated values in the file. (Basically, count the number of the comma. The total size should be the number of comma + 1)
- Dynamically create an array that matches the size of the comma-separated value.
- Store each value in an array. (*Hint: Use the `atoi()` function in `<stdlib.h>`)
- You may also need to use the rewind() function in the `<stdio.h>` header file to set the file position to the beginning of the file.
- You may also assume that values in the CSV file do not have more than 2-digits (99 is the max value).
- Compute the average of all the numbers in the array.
*/

void printarray(int *anarray, int size){
    int n;
    for(int i=0; i<size; i++){
        printf("%d ", anarray[i]);
    }
    printf("\n");
}


int main(int argc, char *argv[]) {


FILE *nump;

nump = fopen("num.csv", "r");

 if(nump == NULL){
    printf("File cannot be opened or does not exist.\n");
    return 1;
  }
  rewind(nump);

  int commas = 0;
  int c;
//need a function to tell me how big the file is and then assign that to size

  while((c = fgetc(nump)) != EOF){
  if((c = fgetc(nump)) == 44){
    commas++;
  }
}
commas = commas+1;

printf("\nnumber of digits in file: %d\n",commas);

int numarray[commas];


//printarray(numarray, commas);

rewind(nump);

char savstr[2];
savstr[0] = '\0';

while((c = fgetc(nump)) != EOF){
  
  printf("c = %d, savstr = %s\n", c, savstr);
  if(c == 44){//if c is a comma,
    //then take the number before, and enter it into the array
    //then clear the savstr
    printf("inside if statement, c = %d, savstr = %s\n", c, savstr);
    savstr[0] = '\0';
    
  }else{ 
    printf("inside else statement, savstr = %s\n", savstr);
    strcat(savstr, itoa(c));
  }
  
}
  
  


/*for(int i=0; i=commas; i++){
    if(numarray[i]=",")
}*/


return 0;
}