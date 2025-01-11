#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  long long t;
  cin >> t;
  vector<long long> ans(t, 0);
  for(long long i = 0; i < t; i++) {
    long long a, b;
    cin >> a >> b;
    ans[i] = min(min(a,b),(a+b)/3);
  }
  for(long long i = 0; i < t; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}
