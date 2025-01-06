#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  vector<int> max_scores(t, 0);
  for(int k = 0; k < t; k++) {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int max_score = 0;
    for(int i = 0; i < n; i++) {
      int score = 0;
      int j = i;
      while(j < n) {
	score += a[j];
	j += a[j];
      }
      if(score > max_score) {
	max_score = score;
      }
    }
    max_scores[k] = max_score;
  }
  for(int i = 0; i < t; i++) {
    cout << max_scores[i] << endl;
  }
  return 0;
}
