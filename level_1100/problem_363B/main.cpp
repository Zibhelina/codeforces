#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    long long n, k;
    std::cin >> n >> k;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    
    long long previous_sum = 0;
    for(int i = 0; i < k; i++) {
        previous_sum += v[i];
    }

    long long last_left_index = 0;
    long long last_right_index = k-1;
    long long min_sum = previous_sum;
    long long min_index = 0;

    for(long long current_right_index = k; current_right_index <= n-1; current_right_index++) {
        long long current_sum = previous_sum - v[last_left_index] + v[current_right_index];
        
        if(current_sum < min_sum) {
            min_sum = current_sum;
            min_index = last_left_index+1;
        }

        last_left_index += 1;
        last_right_index = current_right_index;
        previous_sum = current_sum;
    }
    min_index++; // 1-indexed
    printf("%lld\n", min_index);
    return 0;
}