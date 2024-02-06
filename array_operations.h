#pragma once
#define ARRAY_OPERATIONS_H

typedef struct {
    int rows;
    int cols;
    int* data;
} PtrArray2Dim;

PtrArray2Dim* Array2Dim_Create(int rows, int cols);
void Array2Dim_Fill(PtrArray2Dim* array);
void Array2Dim_Free(PtrArray2Dim* array);

