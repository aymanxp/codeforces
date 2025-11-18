#include <iostream>
#define eps 1e-3
using namespace std;

void solve() {
  double a, b, n;
  cin >> a >> b >> n;
  if (n == 1) {
    cout << n << "\n";
    return;
  }
  if (min(b, a) == min(b, a / n) || abs(min(b, a) - n * min(b, a / n)) <= eps) {
    cout << 1 << "\n";
    return;
  }
  cout << 2 << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
