#include <iostream>

int main() {
    int a;
    int b;
    std::cin >> a >> b;
    int years_later = 0;
    while(a <= b) {
        a *= 3;
        b *= 2;
        years_later++;
    }
    printf("%d\n", years_later);
    return 0;
}