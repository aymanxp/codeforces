#include <bits/stdc++.h>

using namespace std;

const long long bigNum = pow(10, 8);

long long gCd(long long a, long long b) {
  while (a != 0) {
    int r = b % a;
    b = a;
    a = r;
  }
  return b;
}

void solve() {
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  for (int x = 2; x <= bigNum; ++x) {
    for (auto num : a) {
      if (gCd(x, num) == 1) {
        cout << x << "\n";
        return;
      }
    }
  }
  cout << "-1\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
