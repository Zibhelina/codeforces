#include <iostream>
#include <vector>

int main() {
    long long n, k;
    std::cin >> n >> k;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    long long min_sum = LLONG_MAX;
    long long min_start = 0;
    for(long long i = 0; i <= n-k; i++) {
        long long current_sum = 0;
        for(long long j = 0; j < k; j++) {
            current_sum += v[i+j];
        }
        if(current_sum < min_sum) {
            min_sum = current_sum;
            min_start = i;
        }
    }
    min_start++;
    printf("%lld\n", min_start);
    return 0;
}