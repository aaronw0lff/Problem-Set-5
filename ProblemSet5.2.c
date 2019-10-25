#include <stdio.h>
#include <stdlib.h>
/*
## Problem 5.2 - Pointer Arithmetic
- Create a file named ProblemSet5.2.c.
- Write a function that rotates the values in an integer array. 
- The function should take three arguments, an array to rotate, size of the array, and rotation steps. 
- A positive rotation steps should rotate the array to the right while negative number should rotate the array to the left. 
- Practice using pointer arithmetic in the function rather than using array indexing.
- Test and print the result of the function in the main() function.
*/

//printarray prints an array
void printarray(int *anarray, int size){
    int n;
    for(int i=0; i<size; i++){
        printf("%d ", anarray[i]);
    }
    printf("\n");
}



//rotate rotates an array - A positive rotation step- rotates to the right;
// while negative step number should rotate the array to the left. 

void rotate(int *array, int size, int steps){
    int saved;
    
   // printf("we are in the rotate function, %d\n",steps);
   // printarray(array, size);

    
    if(steps<0){  // steps is negative; rotate left

     for (int j = 0; j > steps; j--){ //rotate steps number of times

        saved = array[0]; 

 	for(int i=0; i<size; i++){        		
            	     *(array+i) = *(array+i+1); 
        	     }
         array[size-1] = saved;
        }
      }

        


    else { //steps is positive rotate right

        for (int j = 0; j < steps; j++){ //rotate steps number of times

           saved = array[size-1]; // save the last value
   
           for(int i=size-1; i>=0; i--){  //shift one
                *(array+i) = *(array+i-1); 
           	}
           array[0] = saved; //replace first value

	   }
       
    	}
    return;
}



int main(int argc, char *argv[]) {

    int myarray[] = {1, 2, 3, 4, 5};
    int *iptr;
    int n = sizeof(myarray) / sizeof(myarray[0]);
    int rotstep;
    printarray(myarray, n);

   /* 
   iptr=&myarray[0];
    printf("my iptr is pointing to %d\n", *iptr);

    iptr=myarray;
    printf("my iptr is pointing to %d\n", *iptr);

    iptr++;
    printf("my iptr is pointing to %d\n", *iptr);
    
    iptr=&myarray[n-1];
    printf("my iptr is pointing to %d\n", *iptr);
    */

    printf("How many steps to rotate(positive to the right, negative to the left): ");
    scanf("%d",&rotstep);
    
    rotate(myarray, n, rotstep);
    printarray(myarray, n);


    return 0;
}

