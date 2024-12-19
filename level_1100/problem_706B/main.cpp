#include <iostream>
#include <vector>
#include <algorithm>

long long lower_bound(std::vector<long long>& v, long long low, long long high, long long target) {
    long long answer = high+1;
    while(low <= high) {
        long long mid = low + ((high - low) / 2);
        if(v[mid] > target) {
            answer = mid;
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    return answer;
}

int main() {
    long long n;
    std::cin >> n;
    std::vector<long long> store_prices(n);
    for(long long i = 0; i < n; i++) {
        std::cin >> store_prices[i];
    }
    std::sort(store_prices.begin(), store_prices.end());
    long long q;
    std::cin >> q;
    for(int i = 0; i < q; i++) {
        long long budget;
        std::cin >> budget;
        long long count = lower_bound(store_prices, 0, n-1, budget);
        printf("%lld\n", count);
    }
    return 0;
}