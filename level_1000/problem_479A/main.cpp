#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    int max = a + b + c;
    if((a * b) + c > max) {
        max = (a * b) + c;
    }
    if(a + (b * c) > max) {
        max = a + (b * c);
    }
    if((a * b * c) > max) {
        max = a * b * c;
    }
    if((a + b) * c > max) {
        max = (a + b) * c;
    }
    if(a * (b + c) > max) {
        max = a * (b + c);
    }
    printf("%d\n", max);
    return 0;
}