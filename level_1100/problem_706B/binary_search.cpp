#include <iostream>
#include <algorithm>
#include <vector>

int binary_search(std::vector<int> v, int low, int high, int target) {
    while(low <= high) {
        int mid = low + ((high - low) / 2);
        if(v[mid] == target) {
            return mid;
        } else if(v[mid] < target) {
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return -1;
}

int lower_bound(std::vector<int> v, int low, int high, int target) {
    int answer = -1;
    while(low <= high) {
        int mid = low + ((high - low) / 2);
        if(v[mid] >= target) {
            answer = mid;
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    return answer;
}

int main() {
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i <= 11; i++) {
        int res = lower_bound(v, 0, v.size()-1, i);
        printf("%d\n", res);
    }
    return 0;
}