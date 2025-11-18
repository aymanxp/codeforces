
#include <iostream>
#include <vector>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  int Nones = 0;
  int zeros = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] == -1)
      ++Nones;
    else if (a[i] == 0) {
      ++zeros;
    }
  }
  int counter = zeros;
  if (Nones % 2 != 0) {
    counter += 2;
  }
  cout << counter << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
