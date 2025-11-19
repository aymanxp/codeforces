#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
using u64 = uint64_t;

void solve() {
  u64 n;
  cin >> n;

  while (n % 2 == 0) {
    n /= 2;
  }
  // cout << n << "\n";
  if (n > 1) {
    cout << "YES\n";
    return;
  }
  cout << "NO\n";
}

void solve2() {
  u64 n;
  cin >> n;
  if (n & (n - 1)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve2();
  }
}
