
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  sort(a.begin(), a.end());
  int max = 0;
  for (int i = 0; i < n; i += 2) {
    if (abs(a[i] - a[i + 1]) > max) {
      max = abs(a[i] - a[i + 1]);
    }
  }
  cout << max << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
