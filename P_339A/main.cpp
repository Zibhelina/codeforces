#include <iostream>

using namespace std;

void in_place_swap(int* array, int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

int place_pivot(int* array, int low_index, int high_index) {
    int pivot = array[high_index];
    int boundary_index = low_index;
    for(int i = low_index; i < high_index; i++) {
        if(array[i] < pivot) {
            in_place_swap(array, i, boundary_index);
            boundary_index++;
        }
    }
    in_place_swap(array, boundary_index, high_index);
    return boundary_index;
}

void quick_sort(int* array, int low_index, int high_index) {
    if(low_index == high_index || low_index > high_index)
        return;
    int pivot_index = place_pivot(array, low_index, high_index);
    if((low_index <= pivot_index) && (pivot_index <= high_index)) {
        quick_sort(array, low_index, pivot_index - 1);
        quick_sort(array, pivot_index + 1, high_index);
    }
}

int main() {
    int array_size = 100;
    int* array = (int*)malloc(array_size * sizeof(int));
    
    if (array == NULL) {
        return 1;
    }

    char ch;
    int i = 0;
    size_t used_size = 0;
    while(cin.get(ch)) {
        if(ch == '\n') {
            break;
        }
        else if(ch == '+') {
            continue;
        }
        else {
            array[i] = (int)ch - 48;
            used_size++;
        }
        i++;
    }

    quick_sort(array, 0, used_size - 1);
    
    if(used_size == 1) {
        printf("%d\n", array[0]);
    }
    else {
        for(int i=0; i < used_size; i++) {
            if(i < used_size - 1) {
                printf("%d+", array[i]);
            } else {
                printf("%d", array[i]);
            }
        }
        printf("\n");
    }

    free(array);
    
    return 0;
}