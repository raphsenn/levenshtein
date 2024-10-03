#include <stdlib.h>
#include "levenshtein.h"

int distance(const char *x, const char *y) {
    size_t x_len = strlen(x);
    size_t y_len = strlen(y);
    
    // Allocate memory for the matrix (cast-type*) malloc(byte-size).
    int **mat = (int **)malloc(x_len * sizeof(int *)); 
    for (size_t i = 0; i < x_len; i++) {
        mat[i] = (int *)malloc(y_len * sizeof(int));
    }

    // Initialize matrix entrys.
    int j = 0; 
    for (size_t i = 0; i < x_len; i++) { mat[i][0] = j; j++; }
    int i = 0; 
    for (size_t j = 0; j < y_len; j++) { mat[0][j] = i; i++; }

    // Begin calculation for levenshtein distance.
    for (size_t i = 0; i < x_len; i++) {
        for (size_t j = 0; j < y_len; j++) {
            
        }
    }


}