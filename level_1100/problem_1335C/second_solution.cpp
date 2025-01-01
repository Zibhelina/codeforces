#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> cnt(n);
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      --x;
      ++cnt[x];
    }
    int mx = *max_element(cnt.begin(), cnt.end());
    int diff = n - count(cnt.begin(), cnt.end(), 0);
    cout << max(min(mx - 1, diff), min(mx, diff-1)) << endl;
  }
  return 0;
}
