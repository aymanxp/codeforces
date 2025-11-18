#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<int> nbrs(k);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    if (i < k)
      nbrs[i] = i;
  }
  int kConunter = 0;
  int nbrCounter = k;
  sort(a.begin(), a.end());
  for (int i = 0; i < n; ++i) {
    if (a[i] == k)
      ++kConunter;
    else if (a[i] < k && a[i] != ``) {
    }
    // for (auto num : nbrs)
    //   cout << num << " ";
    // cout << "\n";
  }
  if (nbrs.size() >= kConunter) {
    cout << nbrs.size();
  } else {
    cout << kConunter;
  }
  cout << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
