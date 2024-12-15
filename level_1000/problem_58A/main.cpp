#include <iostream>

int main() {
    char hello[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    int i = 0;
    char ch;
    while(std::cin.get(ch)) {
        if(ch == '\n') {
            break;
        }
        if(hello[i] == ch) {
            i++;
        }
    }
    if(i == 5) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}