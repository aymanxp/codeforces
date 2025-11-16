#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> ab(n);
  vector<int> a(n), b(n);
  for (int i = 0; i < n; ++i) {
    cin >> ab[i].first;
  }
  for (int i = 0; i < n; ++i) {
    cin >> ab[i].second;
  }

  sort(ab.begin(), ab.end());
  for (int i = 0; i < n; ++i)
    cout << ab[i].first << " ";
  cout << "\n";
  for (int i = 0; i < n; ++i)
    cout << ab[i].second << " ";
  cout << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
