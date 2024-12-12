#include <iostream>

int main() {
    char ch;
    char previous = '*';
    int consecutive_one = 0;
    int consecutive_zero = 0;
    bool is_dangerous = false;
    while(std::cin.get(ch)) {
        if(ch == '\n') {
            break;
        }
        if(previous == ch) {
            if(ch == '0') {
                consecutive_zero++;
                if(consecutive_zero >= 7) {
                    is_dangerous = true;
                    break;
                }
            } else {
                consecutive_one++;
                if(consecutive_one >= 7) {
                    is_dangerous = true;
                    break;
                }
            }
        } else {
            if(ch == '0') {
                consecutive_zero = 1;
                consecutive_one = 0;
            } else {
                consecutive_zero = 0;
                consecutive_one = 1;
            }
        }
        previous = ch;
    }
    if(is_dangerous) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}