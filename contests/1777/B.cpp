#include <iostream>
#define MOD 1000000007
using namespace std;

// long long fact(long long n) {
//   if (n == 1 || n == 0)
//     return 1;
//   return (n % MOD * fact(n - 1) % MOD) % MOD;
// }
long long fact(long long n) {
  long long res = 1;
  for (int i = n; i > 0; --i) {
    res = (res * i) % MOD;
  }
  return res % MOD;
}
void solve() {
  long long n;
  cin >> n;
  if (n == 1) {
    cout << 0 << "\n";
    return;
  }
  long long nFact = fact(n);
  long long res = (nFact * ((n * (n - 1)) % MOD)) % MOD;
  cout << res << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
