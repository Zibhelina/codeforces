#include <iostream>
#include <vector>
#include <string>

int place_pivot(std::vector<int>& array, int low_index, int high_index) {
    int boundary = low_index;
    for(int i = low_index; i < high_index; i++) {
        if(array[i] < array[high_index]) {
            int temp = array[i];
            array[i] = array[boundary];
            array[boundary] = temp;
            boundary++;
        }
    }
    int temp = array[high_index];
    array[high_index] = array[boundary];
    array[boundary] = temp;
    return boundary;
}

void quick_sort(std::vector<int>& array, int low_index, int high_index) {
    if(low_index >= high_index) {
        return;
    }
    int pivot = place_pivot(array, low_index, high_index);
    quick_sort(array, low_index, pivot-1);
    quick_sort(array, pivot+1, high_index);
}

int main() {
    int n = 0;
    std::cin >> n;
    std::vector<int> coin_values (n, 0);
    int a = 0;
    int sum = 0;
    for(int i = 0; i < n; i++) {       
        std::cin >> a;
        coin_values[i] = a;
        sum += a;
    }
    quick_sort(coin_values, 0, n-1);
    int brother1_value = 0;
    int brother2_value = sum;
    int i = n - 1;
    int number_of_winner_coins = 0;
    while(brother1_value <= brother2_value) {
        if(i < 0) {
            break;
        }
        brother1_value += coin_values[i];
        brother2_value -= coin_values[i];
        number_of_winner_coins++;
        i--;
    }
    std::cout << number_of_winner_coins << std::endl;
    return 0;
}