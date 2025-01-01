#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
  int t;
  cin >> t;
  vector<int> ans(t, 0);
  for(int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int max_frequency = 0;
    unordered_map<int, int> T1;
    unordered_set<int> S;
    
    for(int j = 0; j < n; j++) {
      int e;
      cin >> e;
      T1[e]++;
      S.insert(e);
      if(T1[e] > max_frequency) {
	  max_frequency = T1[e];
      }
    }
    int T1_size = S.size() - 1 + max_frequency;
    int T2_size = 0;
    
    if(n == 1) {
	ans[i] = 0;
    } else {
	if(max_frequency == 1) {
	  ans[i] = 1;
	} else {
	  int count_repeated = max_frequency; 
	  while(count_repeated > 1) {
	    T1_size--;
	    T2_size++;
	    count_repeated--;
	  }
	  if(T1_size - T2_size > 1 && count_repeated == 1) {
	    T1_size--;
	    T2_size++;
	  }
	  ans[i] = min(T1_size, T2_size);
	}
      }      
  }
  
  for(int e : ans) {
    cout << e << endl;
  }
  
  return 0;
}
