#include <stdio.h>
#include "array_operations.h"
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Rus");
    PtrArray2Dim* array = Array2Dim_Create(3, 4);
    if (array != NULL) {
        Array2Dim_Fill(array);

        printf("Содержимое массива:\n");
        for (int i = 0; i < array->rows; ++i) {
            for (int j = 0; j < array->cols; ++j) {
                printf("%d ", array->data[i * array->cols + j]);
            }
            printf("\n");
        }

        Array2Dim_Free(array);
    }

    return 0;
}
