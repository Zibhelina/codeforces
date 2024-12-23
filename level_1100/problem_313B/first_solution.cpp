#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, ans;
    getline(cin, s);
    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        --l; --r;
        int count = 0;
        for(int j = l; j < r; j++) {
            if(s[j] == s[j+1]) {
                count++;
            }
        }
        ans.append(to_string(count));
        if(i != m-1) {
            ans.append("\n");
        }
    }
    cout << ans << endl;
    return 0;
}