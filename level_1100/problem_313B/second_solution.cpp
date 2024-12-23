#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s, ans;
    vector<int> sum_so_far;
    int sum = 0;
    char current_character;
    cin.get(current_character);
    int last_character = current_character;
    while(cin.get(current_character) && current_character != '\n') {
        s += current_character;
        if(current_character == last_character) {
            sum += 1;
        }
        sum_so_far.push_back(sum);
        last_character = current_character;
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        int query_answer;
        if(l == 0) {
            query_answer = sum_so_far[r-1];
        } else {
            if(r - l == 1) {
                query_answer = sum_so_far[l] - sum_so_far[l-1];
            } else {
                query_answer = sum_so_far[r-1] - sum_so_far[l];
                if(sum_so_far[l] > sum_so_far[l-1]) {
                    query_answer++;
                }
            }    
        }
        ans.append(to_string(query_answer));
        if(i != m - 1) {
            ans.append("\n");
        }
    }
    cout << ans << endl;
    return 0;
}