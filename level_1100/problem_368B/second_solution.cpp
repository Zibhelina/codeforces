#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int main() {
    string ans = "";
    int m, n;
    cin >> n >> m;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++) {
        int a_i;
        cin >> a_i;
        a[i] = a_i;
    }

    vector<int> unique_map(n, 0);
    unordered_set<int> set;
    for(int i = n-1; i >= 0; i--) {
        set.insert(a[i]);
        unique_map[i] = set.size();
    }

    for(int i = 0; i < m; i++) {
        int l_i;
        cin >> l_i;
        l_i--;
        ans.append(to_string(unique_map[l_i]));
        if(i != m-1) {
            ans.append("\n");
        }
    }
    cout << ans << endl;
    return 0;
}