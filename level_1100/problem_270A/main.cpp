#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    string answer;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        if(360 % (180 - a) == 0) {
            answer.append("YES");
            
        } else {
            answer.append("NO");
        }
        if(i != t - 1) {
            answer.append("\n");
        }
    }
    cout << answer << endl;
    return 0;
}