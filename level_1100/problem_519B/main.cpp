#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>

using namespace std;

int difference_of_lists(unordered_map<int, int> m1, unordered_map<int, int> m2) {
  int r = -1;
  for(auto& elem : m1) {
    while(elem.second > 0) {
      if(m2.find(elem.first) == m2.end() || m2[elem.first] == 0) {
	r = elem.first;
	break;
      } else if(m2.find(elem.first) != m2.end()) {
	m2[elem.first]--;
      }
      elem.second--;
    }
  }
  return r;
}

int main() {
    int n;
    cin >> n;
    vector<unordered_map<int, int>> lists(3);
    for(int i = 0; i <= 2; i++) {
      for(int j = 0; j < n-i; j++) {
	int compiler_error;
	cin >> compiler_error;
	lists[i][compiler_error]++;
      }
    }
    vector<int> ans(2, 0);
    ans[0] = difference_of_lists(lists[0], lists[1]);
    ans[1] = difference_of_lists(lists[1], lists[2]);
    printf("%d\n%d\n", ans[0], ans[1]);
    
    return 0;
}
