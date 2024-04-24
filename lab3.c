#include <stdio.h>

void selection_sort(int array[], int size) {
    int i, j, min_index, temp;
    
    for (i = 0; i < size - 1; ++i) {
        min_index = i;
        for (j = i + 1; j < size; ++j) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
    }
}

int main() {
    int array[10000];
    int i, j = 10000;
    
    for (i = 0; i < 10000; ++i) {
        array[i] = j--;
    }
    
    int size = sizeof(array) / sizeof(array[0]);
    
    int k = 0;
    for (k = 0; k < 1000; k++){
        selection_sort(array, size);
    }
    
    return 0;
}
