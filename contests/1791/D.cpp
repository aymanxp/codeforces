#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> suffixSum(string s, int n) {
  vector<int> visit(26, 0);
  vector<int> sums(n, 0);
  for (int i = n - 1; i >= 0; --i) {
    if (i == n - 1) {
      sums[i] = 1;
      visit[s[i] - 'a'] = 1;
      continue;
    }
    if (!visit[s[i] - 'a']) {
      sums[i] = sums[i + 1] + 1;
      visit[s[i] - 'a'] = 1;
    } else {
      sums[i] = sums[i + 1];
    }
  }
  return sums;
}

vector<int> prefixSum(string s, int n) {
  vector<int> visit(26, 0);
  vector<int> sums(n, 0);
  for (int i = 0; i < n; ++i) {
    if (i == 0) {
      sums[i] = 1;
      visit[s[i] - 'a'] = 1;
      continue;
    }
    if (!visit[s[i] - 'a']) {
      sums[i] = sums[i - 1] + 1;
      visit[s[i] - 'a'] = 1;
    } else {
      sums[i] = sums[i - 1];
    }
  }
  return sums;
}

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> prefSums = prefixSum(s, n);
  vector<int> suffSums = suffixSum(s, n);
  int m = prefSums[0] + suffSums[1];
  for (int i = 1; i < n - 1; ++i) {
    if (m < prefSums[i] + suffSums[i + 1]) {
      m = prefSums[i] + suffSums[i + 1];
    }
  }
  cout << m << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
