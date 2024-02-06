#include <stdio.h>
#include <stdlib.h>
#include "array_operations.h"

PtrArray2Dim* Array2Dim_Create(int rows, int cols) {

    if (rows <= 0 || cols <= 0) {
        printf(stderr, "Îøèáêà!!!\n");
        return 0;
    }

    PtrArray2Dim* array = (PtrArray2Dim*)malloc(sizeof(PtrArray2Dim));
    if (array == NULL) {
        printf(stderr, "Îøèáêà!!!\n");
        return 0;
    }

    array->rows = rows;
    array->cols = cols;


    array->data = (int*)malloc(rows * cols * sizeof(int));
    if (array->data == NULL) {
        printf(stderr, "Îøèáêà!!!\n");
        free(array); 
        return 0;
    }

    return array;
}

void Array2Dim_Fill(PtrArray2Dim* array) {
    if (array == NULL) {
        printf(stderr, "Îøèáêà!!!\n");
        return;
    }

    int rows = array->rows;
    int cols = array->cols;

    for (int i = 0; i < rows * cols; ++i) {
        array->data[i] = i % 12;
    }
}

void Array2Dim_Free(PtrArray2Dim* array) {
    if (array != NULL) {
        free(array->data);
        free(array);
    }
}
