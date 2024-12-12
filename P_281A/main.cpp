#include <iostream>

int main() {
    char ch;
    bool is_first_ch = true;
    while(std::cin.get(ch)) {
        if(is_first_ch) {
            if(ch >= 97 && ch <= 122)
                ch -= 32;
            is_first_ch = false;
        }
        if(ch == '\n') {
            break;
        }
        printf("%c", ch);
    }
    printf("\n");
    return 0;
}