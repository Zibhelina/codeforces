#include <iostream>

int main() {
    long long n, k, answer;
    std::cin >> n >> k;
    if(n % 2 == 0) {
        // n/2 = number of odd numbers = number of even numbers
        if(k <= n/2) {
            // k is referring to an odd number
            answer = 2 * (k-1) + 1;
        } else {
            // k is referring to an even number
            answer = 2 * (k-n/2);
        }
    } else {
        // n/2 => number of odd numbers > number of even numbers
        if(k <= (n/2+1)) {
            // k is referring to an odd number
            answer = 2 * (k-1) + 1;
        } else {
            // k is referring to an even number
            answer = 2 * (k-n/2-1);
        }
    }
    printf("%lld\n", answer);
    return 0;
}