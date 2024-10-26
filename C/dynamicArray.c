#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;
    
    arr = (int*) malloc(size * sizeof(int));
    
    for(int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
    }
    
    size += 3;
    arr = (int*) realloc(arr, size * sizeof(int));
    
    for(int i = 5; i < size; i++) {
        arr[i] = (i + 1) * 10;
    }
    
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
}