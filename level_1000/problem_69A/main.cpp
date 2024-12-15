#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int matrix[n][3];
    int sum_x, sum_y, sum_z;
    sum_x = sum_y = sum_z = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            int entry = 0;
            std::cin >> entry;
            matrix[i][j] = entry;
            if(j == 0) {
                sum_x += entry;
            } else if(j == 1) {
                sum_y += entry;
            } else {
                sum_z += entry;
            }
        }
    }
    if(sum_x == 0 && sum_y == 0 && sum_z == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}