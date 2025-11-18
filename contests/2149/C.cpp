
#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  int kConunter = 0;
  int nbrCounter = k;
  sort(a.begin(), a.end());
  if (a[0] == k) {
    kConunter++;
  } else if (a[0] < k) {
    nbrCounter--;
  }
  for (int i = 1; i < n; ++i) {
    if (a[i] == k) {
      kConunter++;
    } else if (a[i] < k && a[i] != a[i - 1]) {
      nbrCounter--;
    } else if (a[i] > k) {
      break;
    }
  }

  cout << max(nbrCounter, kConunter) << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
