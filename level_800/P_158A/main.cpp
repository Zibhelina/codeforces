#include<iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int current_place = 1;
    int count_approved_contestants = 0;
    int kth_score = -1;
    for(int i = 1; i <= n; i++) {
        int current_score;
        cin >> current_score;
        if(current_score > 0) {
            
            if(i < k) {
                count_approved_contestants++;
            }
            else if(i == k) {
                kth_score = current_score;
                count_approved_contestants++;
            }
            else if (i > k) {
                if(current_score < kth_score) {
                    break;
                } else {
                    count_approved_contestants++;
                }
            }
            
        } else {
            break;
        }
    }
    cout << count_approved_contestants << endl;
    return 0;
}