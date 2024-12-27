#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> sums(3);
  for(int i = 0; i <= 2; i++) {
    for(int j = 0; j < n-i; j++) {
      int ce;
      cin >> ce;
      sums[i] += ce;
    }
  }
  printf("%d\n%d", sums[0]-sums[1], sums[1]-sums[2]);
  return 0;
}
