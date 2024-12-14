#include <iostream>
#include <string>

int main() {
    std::string line;
    std::getline(std::cin, line);
    for(char ch : line) {
        if(ch == '\n') {
            break;
        }
        if(ch == 'H' || ch == 'Q' || ch == '9') {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}