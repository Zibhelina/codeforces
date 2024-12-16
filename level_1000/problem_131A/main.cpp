#include <iostream>
#include <string>

bool get_caps_state(std::string str) {
    bool all_uppercase = true;
    for(int i = 1; i < str.size(); i++) {
        if(str[i] >= 97 && str[i] <= 122) {
            all_uppercase = false;
            break;
        }
    }
    return all_uppercase;
}

int main() {
    std::string str(100, '\0');
    std::getline(std::cin, str);
    bool is_caps_on = get_caps_state(str);
    if(is_caps_on) {
        for(int i = 0; i < str.size(); i++) {
            if(str[i] >= 65 && str[i] <= 90) {
                str[i] = str[i] + 32;
            } else {
                str[i] = str[i] - 32;
            }
            printf("%c", str[i]);
        }
    } else {
        for(int i = 0; i < str.size(); i++) {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}