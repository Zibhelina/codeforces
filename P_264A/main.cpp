#include <iostream>

using namespace std;

int main() {
    int ones_position[2];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            int entry;
            cin >> entry;
            if(entry == 1) {
                ones_position[0] = i;
                ones_position[1] = j;
            }
        }
    }
    int y_diff = abs(2 - ones_position[0]);
    int x_diff = abs(2 - ones_position[1]);
    int min_diff = x_diff + y_diff;
    cout << min_diff << endl;
    return 0;
}