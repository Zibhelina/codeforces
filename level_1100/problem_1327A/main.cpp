#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
  string ans = "";
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) {
    long long n, k;
    cin >> n >> k;
    if(n % 2 == 0) {
      if(n < (long long)pow(k,2) || k % 2 != 0) {
	ans.append("NO\n");
      } else {
	ans.append("YES\n");
      }
    } else {
      if(n < (long long)pow(k, 2) || k % 2 == 0) {
	ans.append("NO\n");
      } else {
	ans.append("YES\n");
      }
    }
  }
  cout << ans;
  return 0;
}
