#include <iostream>

long long ceiling(long long x, long long y) {
    long long result;
    if(x % y == 0) {
        result = x / y;
    } else {
        result = (x / y) + 1;
    }
    return result;
}

int main() {
    long long n, m, a, N;
    std::cin >> n >> m >> a;
    if(n < a && m <= a) {
        N = 1;
    } else if(n <= a && m > a) {
        N = ceiling(m, a);
    } else if(n >= a && m <= a) {
        N = ceiling(n, a);
    } else {
        N = ceiling(m, a) * ceiling(n, a);
    }
    printf("%lld\n", N);
    return 0;
}