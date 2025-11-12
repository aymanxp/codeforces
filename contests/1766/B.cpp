#include <iostream>
#include <set>
#include <string>

using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  set<string> a;
  for (int i = 0; i < n - 1; ++i) {
    if (a.find(s.substr(i, 2)) != a.end()) {
      std::cout << "YES\n";
      return;
    }
    a.insert(s.substr(i, 2));
    if (i + 2 < n && s[i] == s[i + 1] && s[i + 1] == s[i + 2])
      ++i;
  }
  cout << "NO\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
