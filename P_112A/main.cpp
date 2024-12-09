#include <iostream>
#include <string>

using namespace std;

int main() {
    string str_1, str_2;
    getline(cin, str_1);
    getline(cin, str_2);
    for(int i = 0; i < str_1.length(); i++) {
        char ch_1 = tolower(str_1[i]);
        char ch_2 = tolower(str_2[i]);
        if(ch_1 < ch_2) {
            cout << -1 << endl;
            return 0;
        }
        else if(ch_1 > ch_2) {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}