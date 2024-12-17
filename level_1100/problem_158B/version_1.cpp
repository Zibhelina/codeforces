#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end());
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] <= 2) {
            for(int j = n-1; j > i; j--) {
                if(v[i] + v[j] <= 4) {
                    v[j] += v[i];
                    count++;
                    break;
                }
            }
        } else {
            break;
        }
    }
    int taxi = n - count;
    printf("%d\n", taxi);
    return 0;
}