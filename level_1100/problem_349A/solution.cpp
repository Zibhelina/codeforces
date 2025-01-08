#include <iostream>
#include <vector>

using namespace std;

int main() {
  long long n;
  cin >> n;
  vector<long long> money_store(3, 0);
  bool is_out_of_money = false;
  while(n--) {
    long long payment;
    cin >> payment;
    if(payment == 25) {
      money_store[0]++;	 
    } else if(payment == 50) {
      if(money_store[0] <= 0) {
	is_out_of_money = true;
	break;
      }
      money_store[0]--;
      money_store[1]++;
    } else if(payment == 100) {
      if(money_store[0] > 0 && money_store[1] > 0) {
	money_store[0]--;
	money_store[1]--;
	money_store[2]++;
      } else if(money_store[0] >= 3) {
	money_store[0]-=3;
	money_store[2]++;
      } else {
	is_out_of_money = true;
	break;
      }
    }
  }
  if(is_out_of_money) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
  return 0;
}
