#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
  int t;
  string ans = "";
  cin >> t;
  while(t--) {
    long long x;
    cin >> x;
    bool flag = false;
    for(long long a = 1; a < cbrt(x); a++) {
      long long acubed = pow(a,3);
      for(long long b = 1; b <= cbrt(x-acubed); b++) {
	if(acubed + pow(b, 3) == x) {
	  flag = true;
	  break;
	}
      }
      if(flag == true) {
	break;
      }
    }
    if(flag == true) {
      ans.append("YES\n");
    } else {
      ans.append("NO\n");
    }
  }
  cout << ans;
  return 0;
}
