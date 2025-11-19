#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
using u64 = uint64_t;

void solve() {
  u64 n;
  cin >> n;
  if (n < 2020) {
    cout << "NO\n";
    return;
  }
  int r = n % 2020;
  int q = n / 2020;
  if (r <= q) {
    cout << "YES\n";
    return;
  }
  cout << "NO\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
