#include <iostream>
#include <string>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int counter = 0;
  for (int i = n - 2; i >= 0; --i) {
    if (s[i] != s[n - 1]) {
      ++counter;
    }
    // cout << s[i] << "\n";
  }
  cout << counter << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
