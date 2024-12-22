#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    size_t n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(2));
    for(size_t i = 0; i < n; i++) {
        for(size_t j = 0; j < 2; j++) {
            cin >> v[i][j];
        }
    }

    size_t k = 0;
    sort(v.begin(), v.end(), [k](const vector<int>& a, const vector<int>& b) {
        return a[k] < b[k];
    });

    int last_a = v[0][0];
    int last_b = v[0][1];
    bool is_alex_right = false;
    for(size_t i = 1; i < n; i++) {
        int current_a = v[i][0];
        int current_b = v[i][1];
        if(current_a < last_a || current_b < last_b) {
            is_alex_right = true;
            break;
        }
        last_a = current_a;
        last_b = current_b;
    }
    
    if(is_alex_right) {
        printf("Happy Alex\n");
    } else {
        printf("Poor Alex\n");
    }

    return 0;
}