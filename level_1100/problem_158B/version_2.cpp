#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end());
    int i = 0;
    int j = n - 1;
    int count = 0;
    while(i < j) {
        if(v[i] > 2) { break; }
        if(v[i] + v[j] <= 4) {
            v[j] += v[i];
            count++;
            i++;
            if(v[j] == 4) {
                j--;
            }
        } else {
            j--;
        }
    }
    int taxi = n - count;
    printf("%d\n", taxi);
    return 0;
}