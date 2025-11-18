#include <iostream>
using namespace std;

long long gCd(long long a, long long b) {
  while (a != 0) {
    int r = b % a;
    b = a;
    a = r;
  }
  return b;
}

int main() {
  cout << gCd(2, 1) << "\n";
  cout << gCd(3, 6) << "\n";
}
