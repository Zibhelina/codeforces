#include <iostream>

bool is_vowel(char ch) {
    if(ch != 'A' && ch != 'a' && 
       ch != 'O' && ch != 'o' && 
       ch != 'Y' && ch != 'y' && 
       ch != 'E' && ch != 'e' &&
       ch != 'U' && ch != 'u' &&
       ch != 'I' && ch != 'i') {
        return false;
    }
    return true;
}
int main() {
    char ch;
    char* result = (char*)malloc(sizeof(char) * 300);
    size_t i = 0;
    while(std::cin.get(ch)) {
        if(ch == '\n') {
            break;
        }
        if(!is_vowel(ch)) {
            result[i] = '.';
            if(ch >= 65 && ch <= 90) {
                result[i+1] = ch+32;
            } else {
                result[i+1] = ch;
            }
            i += 2;
        }
    }
    result[i] = '\0';
    printf("%s\n", result);
    free(result);
    return 0;
}