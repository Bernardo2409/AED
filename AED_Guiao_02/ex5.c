// Display the contents of array a with n elements 
// Pre-Conditions: a != NULL and n > 0 
// Example of produced output: Array = [ 1.00, 2.00, 3.00 ] 
#include <stdio.h>
            void DisplayArray(double* a, size_t n) 
            { 
                if(a != NULL && n > 0) {
                    
                    for(int i = 0; i < n; i++) {

                        printf( "%.2f", a[i]);

                    }

                }

            } 
 // Read the number of elements, allocate the array and read its elements 
// Condition: number of elements > 0 
// Pre-Condition: size_p != NULL 
// Return NULL if memory allocation fails 
// Set *size_p to ZERO if memory allocation fails 
             //double* ReadArray(size_t* size_p) { ... } 
 // Allocate and return a new array with (size_1 + size_2) elements 
// which stores the elements of array_1 followed by the elements of array_2 
// Pre-Conditions: array_1 != NULL and array_2 != NULL 
// Pre-Conditions: size_1 > 0 and size_2 > 0 
// Return NULL if memory allocation fails 
          //double* Append(double* array_1, size_t size_1, double* array_2, size_t size_2) 
               //{ ... } 
 
// Test example:    Array = [ 1.00, 2.00, 3.00 ] 
//                  Array = [ 4.00, 5.00, 6.00, 7.00 ] 
//                  Array = [ 1.00, 2.00, 3.00, 4.00, 5.00, 6.00, 7.00 ]