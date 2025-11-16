#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << 1 << "\n";
    return;
  }
  if (n <= 4) {
    cout << 2 << "\n";
    return;
  }
  if (n <= 8 && n > 4) {
    cout << 3 << "\n";
    return;
  }

  int count = 2;
  int nNv = n;
  while (ceil(nNv / 2.0) > 4) {
    ++count;
    nNv = ceil(nNv / 2.0);
  }
  if (n % 2 != 0)
    ++count;
  cout << count << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
