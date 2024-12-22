#include <iostream>
#include <vector>

typedef long long ll;

int main() {
    ll n;
    std::cin >> n;
    std::vector<ll> price(n);
    std::vector<ll> quality(n);

    for(ll i = 0; i < n; i++) {
        std::cin >> price[i];
        std::cin >> quality[i];
    }

    bool res = false;
    for(ll i = 0; i < n-1; i++) {
        for(ll j = i+1; j < n; j++) {
            if(price[i] < price[j] && quality[i] > quality[j]) {
                res = true;
                break;
            }
        }
    }

    if(res) {
        printf("Happy Alex\n");
    } else {
        printf("Poor Alex\n");
    }
    return 0;
}