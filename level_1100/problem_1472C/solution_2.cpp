#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  vector<int> ans(t, 0);
  for(int i = 0; i < t; i++) {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    vector<int> b(n, 0);
    for(int j = 0; j < n; j++) {
      cin >> a[j];
      b[j] = j+1;
    }
    int count = 0;
    int max = 0;
    int j = 0;
    while(count <= n) {
      if(b[j] <= n) {
	b[j] += a[b[j]+1];
	if(b[j] > n) {
	  count++;
	}
	if(max < b[j]) {
	  max = b[j];
	}
      }
    }
    ans[i] = max;
  }
  for(int i = 0; i < t; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}
