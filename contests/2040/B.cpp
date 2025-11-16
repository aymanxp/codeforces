#include <iostream>
using namespace std;

void solve() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << 1 << "\n";
    return;
  }
  int count = 1;
  int x = 1;
  while (x < n) {
    ++count;
    x = 2 * (x + 1);
  }
  cout << count << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
