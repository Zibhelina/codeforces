#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    string ans;
    int n, m;
    cin >> n >> m;
    vector<int> a;
    for(size_t i = 0; i < n; i++) {
        int a_i;
        cin >> a_i;
        a.push_back(a_i);
    }
    for(size_t j = 0; j < m; j++) {
        int l_j;
        cin >> l_j;
        l_j--;
        unordered_set<int> set;
        for(size_t z = l_j; z <= n; z++) {
            set.insert(a[z]);
        }
        ans.append(to_string(set.size()-1));
        if(j != m-1) {
            ans.append("\n");
        }
    }
    cout << ans << endl;
    return 0;
}