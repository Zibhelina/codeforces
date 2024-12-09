#include <iostream>

int place_pivot(int* array, size_t array_size) {
    
}

void quick_sort(int* array, size_t array_size) {
    if(array_size <= 1)
        return;
    int pivot_index = place_pivot(array, array_size);
    quick_sort(array, (array_size - 1) / 2);
    quick_sort(array + pivot_index, (array_size - 1) / 2);
}

int main() {
    
    return 0;
}