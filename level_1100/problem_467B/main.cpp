#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> diff(m+1, 0);
  vector<uint32_t> xis(m+1);
  int ans = 0;
  for(int i = 0; i < m+1; i++) {
    cin >> xis[i];
  }

  for(int i = 0; i < m; i++) {
    uint32_t t1 = xis[i];
    uint32_t t2 = xis[m];
    uint32_t one = (uint32_t)1;
    for(int j = 0; j < 32; j++) {
      if(((t1 & one) ^ (t2 & one)) != 0) {
	diff[i]++;
      }
      t1 = t1 >> 1;
      t2 = t2 >> 1;
    }
  }
  for(int i = 0; i < m; i++) {
    if(diff[i] <= k) {
      ans++;
    }
  }
  printf("%d\n", ans);
  return 0;
}
