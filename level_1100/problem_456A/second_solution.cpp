#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    size_t n;
    cin >> n;
    vector<vector<ll>> v(n, vector<ll>(2));
    for(size_t i = 0; i < n; i++) {
        for(size_t j = 0; j < 2; j++) {
            cin >> v[i][j];
        }
    }
    
    vector<vector<ll>> sorted_by_price(v);
    size_t k = 0;
    sort(sorted_by_price.begin(), sorted_by_price.end(), [k](const vector<ll>& a, const vector<ll>& b) {
        return a[k] < b[k];
    });

    vector<vector<ll>> sorted_by_quality(v);
    k = 1;
    sort(sorted_by_quality.begin(), sorted_by_quality.end(), [k](const vector<ll>& a, const vector<ll>& b) {
        return a[k] < b[k];
    });

    for(size_t i = 0; i < n; i++) {
        if(!equal(sorted_by_price.begin(), sorted_by_price.end(), sorted_by_quality.begin(), sorted_by_quality.end())) {
            printf("Happy Alex\n");
            return 0;
        }
    }
    printf("Poor Alex\n");
    return 0;
}