#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;
  vector<int> ans(t, 0);
  for(int i = 0; i < t; i++) {
    int n;
    cin >> n;
    vector<int> a(n+1, 0);
    for(int j = 1; j <= n; j++) {
      cin >> a[j];
    }
    vector<int> score(n+1, 0);
    for(int j = n; j >= 1; j--) {
      int s = j + a[j];
      if(s <= n) {
	score[j] = score[s] + a[j];
      } else {
	score[j] = a[j];
      }
    }
    ans[i] = *max_element(score.begin(), score.end());  
  }
  for(auto& elem : ans) {
    cout << elem << endl;
  }
  return 0;
}
