#include <iostream>
#include <vector>
#include <string>

const int ALPHABET_SIZE = 26;

int min_index(std::vector<int>& letter_count, std::string& str, int n, int forbidden) {
    // get the str index where the least occurring letter is
    // 1 - what's the least occurring letter
    int least_count;
    int index;
    for(int i = 0; i < ALPHABET_SIZE; i++) {
        if(i != forbidden && letter_count[i] > 0) {
            least_count = letter_count[i];
            index = i;
        }
    }
    
    for(int i = 0; i < ALPHABET_SIZE; i++) {
        if(least_count > letter_count[i] && letter_count[i] > 0 && i != forbidden) {
            least_count = letter_count[i];
            index = i;
        }
    }
    // 2 - where does it first appear in str
    for(int i = 0; i < n; i++) {
        if(str[i] == (index + 97)) {
            return i;
        }
    }
    return 0;
}

int max_value(std::vector<int> letter_count) {
    int max_count = letter_count[0];
    int max_letter = 0;
    for(int i = 0; i < ALPHABET_SIZE; i++) {
        if(letter_count[i] > max_count) {
            max_count  = letter_count[i];
            max_letter = i;
        }
    }
    return max_letter + 97;
}

void minimize_permutations(std::string* str, int n) {
    std::vector<int> letter_count (ALPHABET_SIZE, 0);
    for(int i = 0; i < n; i++) {
        letter_count[((int)(*str)[i])-97]++;
    }
    int most_occurring_letter = max_value(letter_count);
    int least_occurring_index = min_index(letter_count, *str, n, most_occurring_letter-97);
    (*str)[least_occurring_index] = most_occurring_letter;
}
int main() {
    std::vector<std::string> response;
    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        std::cin >> n;
        std::string str;
        std::cin >> str;
        minimize_permutations(&str, n);
        response.push_back(str);
    }
    for(int i = 0; i < t; i++) {
        std::cout << response[i] << std::endl;
    }
    return 0;
}