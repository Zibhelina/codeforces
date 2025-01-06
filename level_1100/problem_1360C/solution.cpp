#include <iostream>
#include <vector>

using namespace std;

int main() {
  string ans;
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> even;
    vector<int> odd;
    while(n--) {
      int e;
      cin >> e;
      if(e % 2 == 0) {
	even.push_back(e);
      } else {
	odd.push_back(e);
      }
    }
    if(even.size() % 2 == 0 && odd.size() % 2 == 0) {
      ans.append("YES\n");
    } else if((even.size() % 2 == 0 && odd.size() % 2 == 1) || (even.size() % 2 == 1 && odd.size() % 2 == 0)) {
      ans.append("NO\n");
    } else {
      bool flag = false;
      for(int i = 0; i < even.size(); i++) {
	for(int j = 0; j < odd.size(); j++) {
	  if(abs(even[i] - odd[j]) == 1) {
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
  }
  cout << ans;
  return 0;
}
