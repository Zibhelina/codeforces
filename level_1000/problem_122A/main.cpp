#include <iostream>

bool is_lucky(int n) {
    int q, r;
    q = n;
    while(q != 0) {
        r = q % 10;
        q /= 10;
        if(r != 4 && r != 7) {
            return false;
        }
    }
    return true;
}

bool is_almost_lucky(int n) {
    int lucky_number = 4;
    int i = 0;
    while(lucky_number <= n) {
        if(is_lucky(lucky_number) && n % lucky_number == 0) {
            return true;
        }
        lucky_number++;
    }
    return false;
}

int main() {
    int n;
    std::cin >> n;
    if(is_almost_lucky(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}